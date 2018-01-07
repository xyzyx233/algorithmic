#include <iostream>
//#include <fstream>

using namespace std;
class point {
private:
    int x,y;
public:
    point(){
        x=0,y=0;
    }
    point(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }

    void setX(int x) {
        point::x = x;
    }

    void setY(int y) {
        point::y = y;
    }
};

class queen{
private:
    int N;
    int* chess=NULL;
public:
    queen(int N=8){
        this->N=N;
        chess=new int[N*N];
        for(int i=0;i<N;i++)
            chess[i]=0;
    }
    bool check(point p){
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
    void showresult(){
        for(int i=0;i<N;i++){
            for (int j = 0; j < N; ++j) {
                cout << chess[i*N+j];
            }
            cout << endl;
        }
    }
    void start(){
        point p(0,0);
        while(p.getx()>=0)
        {
            while(p.gety()<N)
            {
                if(p.getx()==N-1 && check(p))
                {
                    chess[p.getx()*N+p.gety()]=1;
                    showresult();
                    cout << endl;
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
};

int main(){
    queen q=queen();
    q.start();
}
