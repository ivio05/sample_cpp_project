#include <gtest/gtest.h>

#include "my_mul.hpp"

TEST(Mul, Simple) {
    EXPECT_EQ(my_mul(3, 8), 24);
    EXPECT_EQ(my_mul(34, 85), my_mul(85, 34));
    EXPECT_EQ(my_mul(-7, 4), -28);
}