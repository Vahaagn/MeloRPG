//
// Created by fotoblysk on 16.10.16.
//

#include <SFML/Graphics.hpp>
#include <fstream>
#include "FPSCounter.h"

void FPSCounter::update(sf::Time &elapsedTime) {
    _lastElpsedTime += elapsedTime;
    ++_counter;
    if (_lastElpsedTime >= sf::seconds(1)) {
        _lastElpsedTime -= sf::seconds(1);
        setFPS();
        _counter = 0;
    }
}

void FPSCounter::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    std::string tmp = "FPS: ";
    tmp += std::to_string(_fps);
    sf::Text drawText(tmp, testFont);
    drawText.setPosition(10, 10);
    target.draw(drawText, states);
}

void FPSCounter::setFPS() {
    _fps = _counter;
}

FPSCounter::FPSCounter()
        : _counter(0) {
    std::fstream lol;
    lol.open("./dupa.txt");
    testFont.loadFromFile("./goodfoot.ttf");

}
