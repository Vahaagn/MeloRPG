//
// Created by matgi on 13.10.2016.
//

#include "MeloRPG.h"

MeloRPG::MeloRPG() {

}

MeloRPG::~MeloRPG() {

}

void MeloRPG::createWindow(int width, int height, std::string title) {
    sf::VideoMode videoMode(width, height);
    _window = std::shared_ptr<sf::RenderWindow>(new sf::RenderWindow(videoMode, title));
}

void MeloRPG::start() {
    sf::Clock timer;
    sf::Time elapsedTime;
    while (_window->isOpen()) {
        elapsedTime = timer.restart();

        update(elapsedTime);
        draw();
    }
}

void MeloRPG::update(sf::Time &game_time) {
    sf::Event event;

    while (_window->pollEvent(event)) {
        if (event.type == sf::Event::Closed ||
            (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
            _window->close();
    }

    _componentManager.update(game_time);
}

void MeloRPG::draw() {
    _window->clear(sf::Color(100, 149, 237));

    _componentManager.draw(_window);

    _window->display();
}
