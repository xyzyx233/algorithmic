//
// Created by asus on 2018/1/7.
//

#include "point.h"
point::point(){
    x=0,y=0;
}
point::point(int x,int y){
    this->x=x;
    this->y=y;
}
int point::getx(){
    return x;
}
int point::gety(){
    return y;
}

void point::setX(int x) {
    point::x = x;
}

void point::setY(int y) {
    point::y = y;
}
