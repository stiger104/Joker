//
// Created by zhuangxk on 5/17/16.
//
#include <iostream>
#include <assert.h>


template<typename T>
void swap(T& t1, T& t2) {
    T tmp;
    tmp = t1;
    t1 = t2;
    t2 = tmp;
}

int strcmp_(const char* src, const char* dest) {
    assert ((NULL != src) && (NULL != dest));
    while (*src == *dest) {
        if ('\0' == *src) {
            break;
        }
        src++;
        dest++;
    }
    return *src - *dest;
}

char* strcpy_(char* src, char* dest) {
    char* dest_ = dest;
    assert((NULL != src) && (NULL != dest));
    while (*dest_++ = *src++);
    return dest_;
}