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
    int fps = fpsCounter.get_fps();
    EXPECT_EQ(fps, 0);

    sf::Time time = sf::milliseconds(100);
    for (auto i = 0; i < 10; ++i)
        fpsCounter.update(time);
    fps = fpsCounter.get_fps();
    EXPECT_EQ(fps, 10);


    time = sf::microseconds(100);
    for (auto i = 0; i < 10000; ++i)
        fpsCounter.update(time);
    fps = fpsCounter.get_fps();
    EXPECT_EQ(fps, 10000);
}