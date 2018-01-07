//
// Created by asus on 2018/1/7.
//

#ifndef NQUEEN_QUEEN_H
#define NQUEEN_QUEEN_H

#include <iostream>
#include "point.h"

class queen {
private:
    int N;
    int* chess=NULL;
public:
    queen(int N=8);
    bool check(point p);
    void showresult();
    void start();
    void r_start(point p);
};


#endif //NQUEEN_QUEEN_H
