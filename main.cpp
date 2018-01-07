//#include <iostream>
#include "queen.h"
#include <fstream>

using namespace std;


int main(){
    ofstream SaveFile("cpp-home.txt");
    SaveFile << "Hello World, from www.cpp-home.com and Loobian!";
    SaveFile.close();
//    queen q=queen();
//    q.start();
}
