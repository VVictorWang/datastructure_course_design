//
// Created by victor on 2/12/18.
// email: chengyiwang@hustunique.com
// blog:  www.victorwan.cn
//

#ifndef DATAS_COURSE_QUEUE_H
#define DATAS_COURSE_QUEUE_H

#include <list>

template<typename T>
class Queue : public std::list<T> {
public:
    void enqueue(T const &e) {
        this->push_back(e);
    }

    T rear() { return this->back()->data; }


    T dequeue() {
        T data = this->front();
        this->pop_front();
        return data;
    }


};

#endif //DATAS_COURSE_QUEUE_H
