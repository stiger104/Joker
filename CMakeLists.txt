cmake_minimum_required(VERSION 3.0)
project(Joker)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#source directory
AUX_SOURCE_DIRECTORY(src DIR_SOURCE)
#test directory
AUX_SOURCE_DIRECTORY(test DIR_TEST)

#add executable encoder
ADD_EXECUTABLE(Joker ${DIR_SOURCE} ${DIR_TEST} src/trie.h test/test_trie.cc src/trie_do.h src/queue_do.h)

#add link library
TARGET_LINK_LIBRARIES(Joker gtest gtest_main -lpthread -lm)