#ifndef MYTEST_H
#define MYTEST_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(searchTest0_1, glhf) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(search(1, 1, 1, &x1, &x2), 0);
}

TEST(searchTest2_1, glhf1) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(search(1, 1, 0, &x1, &x2), 2);
    ASSERT_EQ(x1, -1);
    ASSERT_EQ(x2, 0);
}

TEST(searchTest2_2, glhf1) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(search(3, 7, 4, &x1, &x2), 2);
    ASSERT_NEAR(x1, -1.3, 0.04);
    ASSERT_EQ(x2, -1);
}

TEST(searchTest2_3, glhf1) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(search(2, 2, -3, &x1, &x2), 2);
    ASSERT_NEAR(x1, -1.8, 0.03);
    ASSERT_EQ(x2, 0.8228756555322954);
}

TEST(searchTest3_1, glhf2) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(search(0, 7, 3, &x1, &x2), -1);
}

TEST(searchTest3_2, glhf2) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(search(0, 4, 9, &x1, &x2), -1);
}



TEST(searchTest1_1, glhf1) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(search(1, 6, 9, &x1, &x2), 1);
    ASSERT_EQ(x1, -3);
    ASSERT_EQ(x2,0);
}

TEST(searchTest0_2, glhf1) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(search(2, 6, 9, &x1, &x2), 0);
}

#endif
