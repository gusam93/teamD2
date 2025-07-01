#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    // 코드 작성
};

TEST(TS, tc1)
{
    EXPECT_EQ(1, 1);
}
int main()
{
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}