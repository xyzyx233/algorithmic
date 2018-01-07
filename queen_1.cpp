//
// Created by asus on 2018/1/7.
//

#include "queen_1.h"
#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;


//数组初始化
void queen_1::init()
{
    memset(queen,0,9*sizeof(int));
}

//输出结果
void queen_1::print()
{
    for(int i=1; i<9; i++) cout<<queen[i]<<"  ";
    cout<<endl;
}

//剪枝函数
bool queen_1::canPlaceQueen(int k)
{
    for(int i = 1; i < k; i++)
    {
        //判断是否处于同一列或同一斜线
        if(queen[i] == queen[k] || abs(k-i) == abs(queen[k]-queen[i])) return false;
    }
    return true;
}
//迭代方法求解八皇后过程
void queen_1::eightQueen_1()
{
    int k = 1;
    while(k>=1)
    {
        while(queen[k]<=7)
        {
            queen[k] += 1;
            if(k == 8 && canPlaceQueen(k))
            {
                print();
            }
            else if(canPlaceQueen(k))
            {
                k++;
            }
        }
        queen[k] = 0;
        k--;
    }
}

//递归方法求解八皇后过程
void queen_1::eightQueen_2(int k)
{
    for(int i=1; i<9; i++)
    {
        queen[k] = i;
        if(k == 8 && canPlaceQueen(k))
        {
            print();
            return;
        }
        else if(canPlaceQueen(k))
        {
            eightQueen_2(k+1);
        }
    }
}