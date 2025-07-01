#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    // 코드 작성
    int getGop(int a, int b) {
        return a * b;
    }
};

TEST(TS, tc1)
{
    EXPECT_EQ(1, 1);
}

TEST(TS, tcGetGop)
{
	Cal cal;

    EXPECT_EQ(4, cal.getGop(2, 2));
}

int main()
{
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}