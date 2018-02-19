//
// Created by victor on 2/12/18.
// email: chengyiwang@hustunique.com
// blog:  www.victorwang.science
//

#ifndef DATAS_COURSE_LIST_H
#define DATAS_COURSE_LIST_H

#include <iostream>

#define Posi(T) ListNode<T>*

template<typename T>
class ListNode {
    friend std::ostream &operator<<(std::ostream &out, const ListNode &t){
        out << t.data;
        return out;
    }

public:
    T data;
    Posi(T)pred;
    Posi(T)next;

    ListNode() = default;

    ListNode(T e, Posi(T)p = NULL, Posi(T)n = NULL) : data(e), pred(p), next(n) {}

    Posi(T)insertPred(T e);

    Posi(T)insertNext(T e);

    bool operator==(const ListNode &) const;

    bool operator<(const ListNode &) const;

    bool operator>(const ListNode &) const;


};


template<typename T>
class List {
protected:
    int _size;
    ListNode<T> _head;
    ListNode<T> _tail;
public:
    List();

    ~List();

    int size() { return _size; }

    bool empty() { return !_size; }

    Posi(T)first() { return _head.next; }

    Posi(T)head() { return _head.next; }

    Posi(T)tail() { return &_tail; }

    Posi(T)last() { return _tail.pred; }

    Posi(T)insertAsFirst(T e);

    Posi(T)insertAsLast(T e);

    void travser(void visit(T));    //遍历
    Posi(T)insertAfter(Posi(T)p, T e);

    Posi(T)insertBefore(Posi(T)p, T e);

    T remove(Posi(T)p);

    void clear();

    bool disordered();

    void sort();

    Posi(T)find(T e);

    Posi(T)search(T e);
};

template<typename T>
List<T>::~List() {
    Posi(T)x = _head.next;
    Posi(T)x1 = x;
    while (x != &_tail) {
        x1 = x;
        x = x->next;
        delete x1;
    }


}

template<typename T>
Posi(T)ListNode<T>::insertPred(T e) {
    Posi(T)x = new ListNode(e, this->pred, this);
    this->pred->next = x;
    this->pred = x;
    return x;
}

template<typename T>
Posi(T)ListNode<T>::insertNext(T e) {
    Posi(T)x = new ListNode(e, this, this->next);
    this->next->pred = x;
    this->next = x;
    return x;
}

template<typename T>
bool ListNode<T>::operator==(const ListNode &t) const {
    return this->data == t.data;
}

template<typename T>
bool ListNode<T>::operator<(const ListNode &t) const {
    return this->data < t.data;
}

template<typename T>
bool ListNode<T>::operator>(const ListNode &t) const {
    return this->data > t.data;
}




template<typename T>
List<T>::List() {
    _size = 0;

    _head.next = &_tail;
    _tail.pred = &_head;

    _head.pred = NULL;
    _tail.next = NULL;
}

template<typename T>
Posi(T)List<T>::insertAsFirst(T e) {
    Posi(T)x = new ListNode<T>(e, &_head, _head.next);
    _head.next->pred = x;
    _head.next = x;
    ++_size;
    return x;
}

template<typename T>
Posi(T)List<T>::insertAsLast(T e) {
    Posi(T)x = new ListNode<T>(e, _tail.pred, &_tail);
    _tail.pred->next = x;
    _tail.pred = x;
    ++_size;
    return x;
}

template<typename T>
void List<T>::travser(void visit(T)) {
    Posi(T)x = _head.next;
    while (x != &_tail) {
        visit(x->data);
        x = x->next;
    }
}

template<typename T>
Posi(T)List<T>::insertAfter(Posi(T)p, T e) {
    Posi(T)x = new ListNode<T>(e, p, p->next);
    p->next = x;
    x->next->pred = x;
    ++_size;
    return x;
}

template<typename T>
Posi(T)List<T>::insertBefore(Posi(T)p, T e) {
    Posi(T)x = new ListNode<T>(e, p->pred, p);
    p->pred = x;
    x->pred->next = x;
    ++_size;
    return x;
}

template<typename T>
T List<T>::remove(Posi(T)p) {
    T tmp = p->data;
    p->pred->next = p->next;
    p->next->pred = p->pred;
    delete p;
    --_size;
    return tmp;
}

template<typename T>
bool List<T>::disordered() {
    Posi(T)p = _head.next;
    T e = p->data;
    while (p != &_tail) {
        if (p->data < e)
            return true;
        e = p->data;
        p = p->next;
    }
    return false;
}

template<typename T>
void List<T>::sort() {
    Posi(T)i = _head.next;
    Posi(T)j = i;
    while (i != &_tail) {
        for (j = _head.next; j != i && j->data <= i->data; j = j->next);
        Posi(T)newi = i->next;
        j->insertPred(i->data);
        remove(i);
        i = newi;
    }
}

template<typename T>
Posi(T)List<T>::find(T e) {
    Posi(T)x = _head.next;
    while (x != &_tail) {
        if (x->data == e)
            return x;
        x = x->next;
    }
    return 0;
}

//return the largest x which is not bigger than e
//so we can use List.insertAfter(List.search(e), e) to insert e in a sorted list
template<typename T>
Posi(T)List<T>::search(T e) {
    Posi(T)x = _head.next;
    while (x != &_tail && x->data <= e) {
        x = x->next;
    }
    return x->pred;
}

template <typename T>
void List<T>::clear() {
    Posi(T)p = this->head();
    while (p != this->tail()) {
        this->remove(p);
        p = p->next;
    }
}

#endif //DATAS_COURSE_LIST_H
