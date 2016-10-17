#include <gtest/gtest.h>

//
// Created by fotoblysk on 14.10.16.
//
TEST(basic_check, test_eq) {
    EXPECT_EQ(1, 0);
}

TEST(basic_check, test_neq) {
    EXPECT_NE(1, 0);
}

TEST(basic_check, test_fail) {
    EXPECT_EQ(1, 0);
}
