//
// Created by zhuangxk on 5/17/16.
//

#include "../src/method_impl.h"
#include "gtest/gtest.h"


TEST(Method, swap) {

    int a = 1;
    int b = 2;
    swap<int>(a, b);
    EXPECT_EQ(2, a);
    EXPECT_EQ(1, b);

}