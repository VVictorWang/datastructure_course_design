//
// Created by victor on 2/12/18.
// email: chengyiwang@hustunique.com
// blog:  www.victorwan.cn
//

#ifndef DATAS_COURSE_HEADER_H
#define DATAS_COURSE_HEADER_H

#include "List.h"

#define InfoNode ListNode<Info>

typedef struct Info {
    int id;
    char lastname[3];
    char givenname[5];
    InfoNode *friends;
    InfoNode *fans;
    InfoNode *attention;
    InfoNode *hobby;
} Info;
#endif //DATAS_COURSE_HEADER_H
