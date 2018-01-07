//
// Created by asus on 2018/1/7.
//

#include "queen.h"

queen::queen(int N){
    this->N=N;
    chess=new int[N*N];
    for(int i=0;i<N;i++)
        chess[i]=0;
}
bool queen::check(point p){
    //x从0开始
    int w=p.gety();
    int h=p.getx();
    for(int i=0;i<h;i++){
        if(chess[i*N+w]==1){
            return false;
        }
    }
    int fh=h-1;
    int fw=w-1;
    while(fh>=0&&fw>=0){
        if(chess[fh*N+fw]==1){
            return false;
        }
        fh--;
        fw--;
    }
    fh=h-1;
    fw=w+1;
    while(fh>=0&&fw<N){
        if(chess[fh*N+fw]==1){
            return false;
        }
        fh--;
        fw++;
    }
    return true;

}
void queen::showresult(){
    for(int i=0;i<N;i++){
        for (int j = 0; j < N; ++j) {
            std::cout << chess[i*N+j];
        }
        std::cout << std::endl;
    }
}
void queen::start(){
    point p(0,0);
    while(p.getx()>=0)
    {
        while(p.gety()<N)
        {
            if(p.getx()==N-1 && check(p))
            {
                chess[p.getx()*N+p.gety()]=1;
                showresult();
                std::cout << std::endl;
            }
            else if(check(p))
            {
                chess[p.getx()*N+p.gety()]=1;
                p.setX(p.getx()+1);
                p.setY(0);
            } else {
                p.setY(p.gety() + 1);
            }
        }
        p.setX(p.getx()-1);
        for(int i=0;i<N;i++){
            if(chess[p.getx()*N+i]==1){
                chess[p.getx()*N+i]=0;
                p.setY(i+1);
                break;
            }
        }
    }
}
