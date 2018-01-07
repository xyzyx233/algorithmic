//
// Created by asus on 2018/1/7.
//

#ifndef NQUEEN_EVENT_H
#define NQUEEN_EVENT_H


class event{
private:
    int start,end;
public:
    event();
    event(int a,int b);

    int getStart() const;

    void setStart(int start);

    int getEnd() const;

    void setEnd(int end);
};

#endif //NQUEEN_EVENT_H
