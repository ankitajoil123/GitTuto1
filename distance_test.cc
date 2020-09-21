#include "distance.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(Distance,DefaultConstructor) {
    Distance d1;
    EXPECT_EQ(0,d1.getFeets());

}

TEST(Distance,ParamaterizedConstructor) {
    Distance d2(10,20);
    EXPECT_EQ(10,d2.getFeets());

}

