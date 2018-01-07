//
// Created by asus on 2018/1/7.
//

#ifndef NQUEEN_GREEDISGOOD_H
#define NQUEEN_GREEDISGOOD_H

#include <iostream>
#include "event.h"


class greedisgood {
private:
    int n,ans=1;
    event* list=NULL;
public:
    greedisgood();
    greedisgood(int num);
    void getinfo();
    void greedy();

    void setN(int n);
};


#endif //NQUEEN_GREEDISGOOD_H
