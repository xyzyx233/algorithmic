//#include <iostream>
#include "queen.h"
#include "queen_1.h"
#include <fstream>

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
    queen q=queen();
    point p(0,0);
    q.r_start(p);
//    q.start();
//    queen_1 q=queen_1();
//    q.init();
//    q.eightQueen_1();
    return 0;
}
