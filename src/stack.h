//
// Created by zhuangxk on 5/17/16.
//

#ifndef JOKER_STACK_H
#define JOKER_STACK_H


template<class T>
class Stack {

 private:
    enum {BOTTOM = 0, SIZE = 100};
    T content[SIZE];
    int stack_top;

 public:
    Stack();
    ~Stack();
    Stack(const Stack& s);
    Stack& operator= (const Stack& s);
    void push(T new_item);
    T pop();
    T top();
    int is_empty();
    int is_full();

};

#include "stack_impl.h"

#endif //CPPNOOB_STACK_H
