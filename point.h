//
// Created by asus on 2018/1/7.
//

#ifndef NQUEEN_POINT_H
#define NQUEEN_POINT_H


class point {
private:
    int x,y;
public:
    point();
    point(int x,int y);
    int getx();
    int gety();
    void setX(int x);
    void setY(int y);
};


#endif //NQUEEN_POINT_H
