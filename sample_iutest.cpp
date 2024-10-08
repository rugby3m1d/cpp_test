#include "iutest.hpp"

IUTEST(SuiteName, TestName)
{
    int x = 0;
    IUTEST_ASSERT_EQ(0, x);
}

int main(int argc, char** argv)
{
    IUTEST_INIT(&argc, argv);
    return IUTEST_RUN_ALL_TESTS();
}

