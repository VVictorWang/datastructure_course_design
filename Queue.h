//
// Created by victor on 2/12/18.
// email: chengyiwang@hustunique.com
// blog:  www.victorwan.cn
//

#ifndef DATAS_COURSE_QUEUE_H
#define DATAS_COURSE_QUEUE_H

#include "List.h"

template<typename T>
class Queue : public List<T> {
public:
    void enqueue(T const &e) {
        this->insertAsLast(e);
    }
    T rear() { return this->last()->data; }
    T dequeue() {
        T data = this->first()->data;
        this->remove(this->first());
        return data;
    }
};

#endif //DATAS_COURSE_QUEUE_H
