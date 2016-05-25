//
// Created by zhuangxk on 5/19/16.
//


#include "../src/trie.h"
#include "gtest/gtest.h"

Trie trie;


TEST(Trie, main) {


    trie.insert("hello");
    trie.insert("helloworld");
    trie.insert("he");

    EXPECT_EQ(1, trie.startsWith("he"));

}