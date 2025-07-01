#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    int getGop(int a, int b) {
        return a * b;
	}
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