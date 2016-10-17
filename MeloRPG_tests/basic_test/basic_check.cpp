#include <gtest/gtest.h>
#include <Components/Implementations/FPSCounter.h>

//
// Created by fotoblysk on 14.10.16.
//
TEST(basic_check, test_eq) {
    EXPECT_EQ(1, 1);
}

TEST(basic_check, test_neq) {
    EXPECT_NE(1, 0);
}
TEST(basic_check, test_FPSCounter_value) {
    FPSCounter fpsCounter;
    sf::Time time = sf::milliseconds(100);
    fpsCounter.update(time);
    int fps = fpsCounter.getFPS();
    EXPECT_EQ(fps, 10);
}