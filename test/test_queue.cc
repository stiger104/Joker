//
// Created by zhuangxk on 5/18/16.
//

#include "../src/queue.h"
#include "gtest/gtest.h"





TEST(Queue, main) {

    Queue<int> queue;
    queue.Enqueue(1);
    queue.Enqueue(2);

    int* a = queue.Dequeue();
    EXPECT_EQ(1, *a);

}