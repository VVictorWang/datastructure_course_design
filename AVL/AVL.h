//
// Created by victor on 2/12/18.
// email: chengyiwang@hustunique.com
// blog:  www.victorwan.cn
//

#ifndef DATAS_COURSE_AVL_H
#define DATAS_COURSE_AVL_H

#include "BST.h"
#include <QJsonObject>
#include <QJsonArray>
#include "Info.h"

#define BalFac(x) (stature((x)->lchild) - stature((x)->rchild))
#define AvlBalanced(x) ((-2 < BalFac(x)) && BalFac(x) < 2)

template<typename T>
class AVL : public BST<T> {
protected:
    using BST<T>::removeAt;
    using BST<T>::_hot;
    using BST<T>::_root;
    using BST<T>::_size;

    void rotateLL(BinNodePosi(T)p, BinNodePosi(T)q);
    void rotateRR(BinNodePosi(T)p, BinNodePosi(T)q);
    void insertFixUp2(BinNodePosi(T)p);    //By connect34
    using BST<T>::connect34;

public:
    using BST<T>::search;
    virtual BinNodePosi(T)insert(const T &);

    void build_avl(QJsonArray);

    List<T> avl_instersection(AVL<T>);

    List<T> avl_union(AVL<T>);

    List<T> avl_difference(AVL<T>);

    bool avl_is_subtree(BinNodePosi(T));

    bool avl_equals(AVL<T> *);

    virtual bool remove(const T &);

    AVL<T> buid_avl_by_list(ListNode<T> *data);

};

template<typename T>
BinNodePosi(T)tallerChild(BinNodePosi(T)x) {
    return (stature(x->lchild) > stature(x->rchild) ? x->lchild : x->rchild);
}

template<typename T>
void AVL<T>::rotateLL(BinNodePosi(T)t1, BinNodePosi(T)t2) {
    //t2 --> st2
    t2->lchild = t1->rchild;

    //st2 --> t1
    if (t1->rchild)
        t1->rchild->parent = t2;

    //t1 --> t2
    t1->rchild = t2;

    //父节点 --> t1（树根情况）
    if (t2->parent == NULL) {
        t1->parent = NULL;
        this->_root = t1;

        t2->parent = t1;
        return;
    }

    //t1 --> 父节点
    t1->parent = t2->parent;

    //父节点 --> t1（非树根）
    if (t2->parent->lchild == t2)
        t2->parent->lchild = t1;
    else
        t2->parent->rchild = t1;

    //t2 --> t1
    t2->parent = t1;
}

template<typename T>
void AVL<T>::rotateRR(BinNodePosi(T)t2, BinNodePosi(T)t1) {
    //t1 --> st2
    t1->rchild = t2->lchild;

    //st2 --> t1
    if (t2->lchild)
        t2->lchild->parent = t1;

    //t2 --> t1
    t2->lchild = t1;

    //父节点 --> t2（树根）
    if (t1->parent == NULL) {
        this->_root = t2;
        t2->parent = NULL;
        t1->parent = t2;
        return;
    }

    //t2 --> 父节点
    t2->parent = t1->parent;

    //父节点 --> t2（非树根）
    if (t1->parent->lchild == t1)
        t1->parent->lchild = t2;
    else
        t1->parent->rchild = t2;

    //t1 --> t2
    t1->parent = t2;
}

template<typename T>
BinNodePosi(T)AVL<T>::insert(const T &e) {
    BinNodePosi(T)p = search(e);
    if (p != NULL && p->data == e)    //already exist
    {
        return p;
    }

    BinNodePosi(T)x = new BinNode<T>(e, _hot);
    if (_hot == NULL)    //empty tree
    {
        _root = x;
    } else    //insert as a leaf
    {
        if (e < _hot->data)
            _hot->lchild = x;
        else
            _hot->rchild = x;
    }
    ++_size;
    this->updateHeightAbove(x);

    p = x;
    while (p != NULL && AvlBalanced(p)) {
        p = p->parent;
    }
    if (p == NULL)
        return x;

    //p is unbanlced node
    insertFixUp2(p);

    return x;
}

template <typename T>
void AVL<T>::build_avl(QJsonArray data){
    int count = data.count();
    for(int i =0;i<count;i++){
        QJsonObject obj = data.at(i).toObject();
         InfoNode node;
         node.data.id = obj.value("userId").toInt();
         node.data.userName = obj.value("userName").toString().toStdString();
         node.data.friends = node.data.attention = node.data.fans = node.data.hobby = NULL;
         this->insert(node);
    }
    for(int i = 1;i<count+1;i++){
         QJsonObject obj = data.at(i-1).toObject();
         QJsonArray friends = obj.value("friends").toArray();
         QJsonArray fans = obj.value("fans").toArray();
         QJsonArray attentions = obj.value("attentions").toArray();
         InfoNode *node = new InfoNode();
         node->data.id = i;
         node->next = NULL;
         node->pred = NULL;
         InfoNode *head = node;
         for(int j = 0;j<friends.count();j++){
             InfoNode *p = new InfoNode();
             p->data.id = friends.at(j).toInt();
             InfoNode q = (this->search(*p)->data);
             p->data = q.data;
             p->pred =node;
             p->next = NULL;
             node->next = p;
             node =p;
         }
         BinNodePosi(InfoNode) pos = this->search(*head);
         pos->data.data.friends = head->next;

         node = new InfoNode();
         node->next = node->pred = NULL;
         head = node;
         for(int j = 0;j<fans.count();j++){
             InfoNode *p = new InfoNode();
             p->data.id = fans.at(j).toInt();
             InfoNode q = (this->search(*p)->data);
             p->data = q.data;
             p->pred =node;
             p->next = NULL;
             node->next = p;
             node =p;
         }
         pos->data.data.fans = head->next;

         node = new InfoNode();
         node->next = node->pred = NULL;
         head = node;
         for(int j = 0;j<attentions.count();j++){
             InfoNode *p = new InfoNode();
             p->data.id = attentions.at(j).toInt();
             InfoNode q = (this->search(*p)->data);
             p->data = q.data;
             p->pred =node;
             p->next = NULL;
             node->next = p;
             node =p;
         }
         pos->data.data.attention = head->next;


    }
}

template<typename T>
void AVL<T>::insertFixUp2(BinNodePosi(T)p) {
    BinNodePosi(T)q;
    BinNodePosi(T)mid;
    mid = tallerChild(p);
    q = tallerChild(mid);

    BinNodePosi(T)par = p->parent;
    enum {
        ROOT, LEFT, RIGHT
    } ptoc;
    if (p->parent) {
        if (p == p->parent->lchild)
            ptoc = LEFT;
        else
            ptoc = RIGHT;
    } else
        ptoc = ROOT;

    BinNodePosi(T)t1;
    BinNodePosi(T)t2;
    BinNodePosi(T)t3;
    BinNodePosi(T)st1;
    BinNodePosi(T)st2;
    BinNodePosi(T)st3;
    BinNodePosi(T)st4;

    if (p->lchild && q == p->lchild->lchild) {
        t1 = q;
        t2 = q->parent;
        t3 = p;
        st1 = q->lchild;
        st2 = q->rchild;
        st3 = mid->rchild;
        st4 = p->rchild;
    } else if (p->rchild && q == p->rchild->rchild) {
        t1 = p;
        t2 = mid;
        t3 = q;
        st1 = p->lchild;
        st2 = mid->lchild;
        st3 = q->lchild;
        st4 = q->rchild;
    } else if (p->lchild && q == p->lchild->rchild) {
        t1 = mid;
        t2 = q;
        t3 = p;
        st1 = mid->lchild;
        st2 = q->lchild;
        st3 = q->rchild;
        st4 = p->rchild;
    } else {
        t1 = p;
        t2 = q;
        t3 = mid;
        st1 = p->lchild;
        st2 = q->lchild;
        st3 = q->rchild;
        st4 = mid->rchild;
    }

    switch (ptoc) {
        case ROOT :
            _root = t2;
            break;
        case LEFT :
            par->lchild = t2;
            break;
        case RIGHT :
            par->rchild = t2;
            break;
    }
    t2->parent = par;

    connect34(t1, t2, t3, st1, st2, st3, st4);
}


template<typename T>
bool AVL<T>::remove(const T &e) {
    BinNodePosi(T)x = search(e);
    if (!x) return false;

    removeAt(x);

    BinNodePosi(T)p = _hot;
    BinNodePosi(T)q;
    while (p != NULL) {
        q = p;
        p = p->parent;
        if (!AvlBalanced(q)) {
            insertFixUp2(q);
        }
    }

    return true;
}

template<typename T>
List<T> AVL<T>::avl_instersection(AVL<T> tree2) {
    List<T> data2, result;
    tree2.traverPre(data2);
    Posi(T)p = data2.head();
    while (p != data2.tail()) {
        if (this->contains(p->data)) {
            result.insertAsLast(p->data);
        }
        p = p->next;
    }
    return result;
}

template<typename T>
List<T> AVL<T>::avl_union(AVL<T> tree2) {
//    List<T> tree1data, result;
//    this->traverPre(tree1data);
//    Posi(T)p = tree1data.head();
//    cout << p->data << '\t';
//    while (p != tree1data.tail()) {
//        tree2.insert(p->data);
//        p = p->next;
//    }
//    tree2.traverPre(result);
//    return result;
}

template<typename T>
List<T> AVL<T>::avl_difference(AVL<T> tree2) {
    List<T> data2, result;
    tree2.traverPre(data2);
    Posi(T)p = data2.head();
    while (p != data2.tail()) {
        this->remove(p->data);
        p = p->next;
    }
    this->traverPre(result);
    return result;
}

template<typename T>
bool AVL<T>::avl_is_subtree(BinNodePosi(T)tree) {
    if (tree == NULL) {
        return true;
    }
    if (this->contains(tree->data)) {
        if (!avl_is_subtree(tree->lchild)) {
            return false;
        }
        return avl_is_subtree(tree->rchild);
    }
    return false;
}

template<typename T>
bool AVL<T>::avl_equals(AVL<T> *tree) {
    if (!this->avl_is_subtree(tree->root())) {
        return false;
    }
    return tree->avl_is_subtree(this->root());
}

template <typename T>
AVL<T> AVL<T>::buid_avl_by_list(ListNode<T> *data) {
    AVL<T> *avl = new AVL<T>;
    ListNode<T> *p = data;
    while (p != NULL) {
        avl->insert(p->data);
        p = p->next;
    }
    return *avl;
}

typedef AVL<InfoNode> NodeAVL;
#endif //DATAS_COURSE_AVL_H
