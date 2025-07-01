#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    // 코드 작성
    int getSum(int a, int b) {
        return a + b;
    }
};

TEST(TS, tc1)
{
    EXPECT_EQ(1, 1);
}

TEST(TS, tcgetSum) {
    Cal cal;
    int ret = cal.getSum(1, 2);
    EXPECT_EQ(3, ret);
}

int main()
{
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}