//
// Created by asus on 2018/1/7.
//

#include "greedisgood.h"


greedisgood::greedisgood() {
    std::cout << "input n: ";
    std::cin >> n;
    greedisgood::n=n;
    list=new event[n];
}
greedisgood::greedisgood(int num) {
    n=num;
    list=new event[n];
}
void greedisgood::getinfo() {
    for(int i=0;i<n;i++){
        int a,b;
        std::cout << "input start and end: ";
        std::cin >> a >> b;
        while(a>=b){
            std::cout << "second number input invalid" << std::endl;
            std::cin >> b;
        }
        list[i].setStart(a);
        list[i].setEnd(b);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(list[j].getStart()<list[i].getStart()){
                event temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}
void greedisgood::greedy() {
    int lastone=0;
    for(int i=1;i<n;i++){
        if(list[lastone].getEnd()+1<=list[i].getStart()){
            lastone=i;
            ans++;
        }
    }
    std::cout << "answers:" << ans << std::endl;
}

void greedisgood::setN(int n) {
    greedisgood::n = n;
}
