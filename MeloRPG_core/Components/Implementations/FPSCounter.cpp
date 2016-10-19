//
// Created by fotoblysk on 16.10.16.
//

#include <SFML/Graphics.hpp>
#include <GlobalDefs.h>
#include "FPSCounter.h"

FPSCounter::FPSCounter() : _fpsCounter(0), _lastFps(0) {
    _textFont.loadFromFile("resources/OpenSans-Regular.ttf");
    initializeText();
}

void FPSCounter::initializeText() {
    _drawableText.setString(FPS_TEXT);
    _drawableText.setFont(_textFont);
    _drawableText.setPosition(0, 0);
    _drawableText.setFillColor(TEXT_COLOR);
    _drawableText.setOutlineColor(sf::Color::Black);
    _drawableText.setCharacterSize(TEXT_SIZE);
}

void FPSCounter::update(sf::Time &elapsedTime) {
    _summarizedTime += elapsedTime;
    ++_fpsCounter;

    if (_summarizedTime >= SAMPLE_TIME) {
        _summarizedTime -= SAMPLE_TIME;
        updateText();
        _fpsCounter = 0;
    }
}

void FPSCounter::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(_drawableText, states);
}

void FPSCounter::updateText() {
    _lastFps = _fpsCounter;
    _drawableText.setString(FPS_TEXT + utils::to_string(_lastFps));
}

int FPSCounter::getFps() const {
    return _lastFps;
}
