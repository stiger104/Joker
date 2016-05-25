//
// Created by zhuangxk on 5/17/16.
//

#include "../src/stack.h"
#include "gtest/gtest.h"

Stack<int> stack;


TEST(Stack, main) {

    EXPECT_EQ(1, stack.is_empty());

    stack.push(1);
    stack.push(2);
    stack.push(3);

    EXPECT_EQ(3, stack.top());

    EXPECT_EQ(3, stack.pop());

    EXPECT_EQ(2, stack.top());


}