#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    // 코드 작성
    int getZegop(int a)
    {
        return a * a;
    }
};

TEST(TS, tc1)
{
    EXPECT_EQ(1, 1);
}

TEST(TS, tc_zegop) {
    Cal cal;

    int actual = cal.getZegop(3);
    int expect = 9;
    EXPECT_EQ(expect, actual);
}

int main()
{
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}