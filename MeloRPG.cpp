//
// Created by matgi on 13.10.2016.
//

#include "MeloRPG.h"

void MeloRPG::createWindow(int width, int height, std::string title) {
    sf::VideoMode videoMode(width, height);
    _window = std::shared_ptr<sf::RenderWindow>(new sf::RenderWindow(videoMode, title));
}

void MeloRPG::start() {
    sf::Clock timer;
    sf::Time elapsedTime;

    while(_window->isOpen()) {
        elapsedTime = timer.restart();

        update(elapsedTime);

        _window->clear();
        draw();
        _window->display();
    }
}

void MeloRPG::update(sf::Time& game_time) {

}

void MeloRPG::draw() {

}
