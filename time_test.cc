#include "time.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(Time,ParamaterizedConstructor) {
    Time t2(1,20,60);
    EXPECT_EQ(60,t2.getSecond());

}


