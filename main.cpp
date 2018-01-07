//#include <iostream>
#include "queen.h"
#include "queen_1.h"
#include <fstream>
#include "greedisgood.h"

using namespace std;

//class f{
//private:
//    ofstream f;
//public:
//    void show(){
//        f.open("t.txt");
//        f<< "k" ;
//        f.close();
//    }
//};

int main(){
//    f ff;
//    ff.show();
    //递归N后
//    queen q=queen();
//    point p(0,0);
//    q.r_start(p);
    //迭代n后
//    q.start();
    //另一种方法
//    queen_1 q=queen_1();
//    q.init();
//    q.eightQueen_1();
    //贪心算法
    greedisgood g=greedisgood();
    g.getinfo();
    g.greedy();
    return 0;
}
