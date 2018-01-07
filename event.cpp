//
// Created by asus on 2018/1/7.
//

#include "event.h"
event::event() {}
event::event(int a, int b) {
    start=a;
    end=b;
}

int event::getStart() const {
    return start;
}

void event::setStart(int start) {
    event::start = start;
}

int event::getEnd() const {
    return end;
}

void event::setEnd(int end) {
    event::end = end;
}