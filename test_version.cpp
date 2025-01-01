#include "lib.h"

#include <gtest/gtest.h>

TEST(HelloWorldTest, HandlesNegativeVersionNumber)
{
    ASSERT_TRUE(version() > 0);
}
