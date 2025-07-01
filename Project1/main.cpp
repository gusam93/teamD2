#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    // 코드 작성
    int getMinus(int a, int b) {
        return (a - b);
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

int main()
{
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}