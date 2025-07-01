#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    int getDivide(int a, int b) {
        return a / b;
    }
};

TEST(TS, tc5)
{
    Cal cal;
    auto ret = cal.getDivide(10, 5);
    EXPECT_EQ(2, ret);
}

int main()
{
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}