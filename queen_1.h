//
// Created by asus on 2018/1/7.
//

#ifndef NQUEEN_QUEEN_1_H
#define NQUEEN_QUEEN_1_H


class queen_1 {
private:
    int queen[9];
public:
    void init();
    void print();
    bool canPlaceQueen(int k);
    void eightQueen_1();
    void eightQueen_2(int k);
};


#endif //NQUEEN_QUEEN_1_H
