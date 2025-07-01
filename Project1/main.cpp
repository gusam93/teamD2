#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    // 코드 작성


    int getSumSum(int a, int b, int c) {
        return a + b + c;
	}
};

TEST(TS, tc1)
{
    EXPECT_EQ(1, 1);
}

TEST(TS, tc_getSumSum)
{
    Cal cal;
    EXPECT_EQ(cal.getSumSum(1, 2, 3), 6);
}

int main()
{
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}