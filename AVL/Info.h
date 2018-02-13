//
// Created by victor on 2/13/18.
// email: chengyiwang@hustunique.com
// blog:  www.victorwan.cn
//

#ifndef DATAS_COURSE_INFP_H
#define DATAS_COURSE_INFP_H

#include <iostream>
#include "List.h"

#define InfoNode ListNode<Info>

class Info {
    friend std::ostream &operator<<(std::ostream &out, const Info &t){
        out << t.id<<" name: "<<t.userName;
        InfoNode *p = t.friends;
        out<<" friends: ";
        while(p!=NULL){
             out<<p->data.userName<<" ";
             p = p->next;
        }
        p = t.fans;
        out<<" fans: ";
        while(p!=NULL){
             out<<p->data.userName<<" ";
             p = p->next;
        }
        return out;
    }

public:
    int id;
    std::string userName;
    ListNode<Info> *friends;
    ListNode<Info> *fans;
    ListNode<Info> *attention;
    ListNode<Info> *hobby;

    bool operator==(const Info &t) const{
        return this->id == t.id;
    }

    bool operator<(const Info &t) const{
        return this->id < t.id;
    }

    bool operator>(const Info &t) const{
        return this->id > t.id;
    }

};

#endif //DATAS_COURSE_INFP_H
