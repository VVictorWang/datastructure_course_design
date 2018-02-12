//
// Created by victor on 2/12/18.
// email: chengyiwang@hustunique.com
// blog:  www.victorwan.cn
//

#ifndef DATAS_COURSE_HEADER_H
#define DATAS_COURSE_HEADER_H

#include <stack>
#include <queue>
#include <algorithm>
#include <cstdio>
using namespace::std;
#define BinNodePosi(T) BinNode<T>*

template <typename T>
class BinNode{
public:
    T data;
    BinNodePosi(T) lchild;
    BinNodePosi(T) rchild;
    int height;
    int bf;

    BinNode(T e, BinNodePosi(T) p);	//构造二叉树，父节点p，节点内容e
    BinNode();
    ~BinNode(){}


};

template <typename T>
class BinTree{
public:
    BinTree(BinNodePosi(T) root);
    BinTree();
    ~BinTree();
    int size() const { return _size;}
    int height() const{ return _root ? _root->height : 0; }
    bool empty() const { return !_root; }
    BinNodePosi(T) root() const { return _root; }


protected:
    int _size;
    BinNodePosi(T) _root;

    BinNodePosi(T) search(const T &);
    BinNodePosi(T) insert(const T &);
    bool remove(const T &);
    BinNodePosi(T) removeAt(BinNodePosi(T) x);
};

template <typename T>
BinTree<T>::BinTree()
{
    _size = 0;
    _root = NULL;
}

template <typename T>
BinTree<T>::BinTree(BinNodePosi(T) root) : _root(root)
{
    _root = root;
}
#endif //DATAS_COURSE_HEADER_H
