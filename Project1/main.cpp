#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    // ÄÚµå ÀÛ¼º
    int getMinus(int a, int b) {
        return (a - b);
    }

    int getSum(int a, int b) {
        return a + b;
    }

    int getZegop(int a)
    {
        return a * a;
    }
};

TEST(TS, tc1)
{
    EXPECT_EQ(1, 1);
}


TEST(TS, tcGetMinus)
{
    Cal cal;
    EXPECT_EQ(2, cal.getMinus(3, 1));
}

TEST(TS, tcgetSum) {
    Cal cal;
    int ret = cal.getSum(1, 2);
    EXPECT_EQ(3, ret);
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