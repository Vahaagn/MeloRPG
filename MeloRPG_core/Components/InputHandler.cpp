//
// Created by fotoblysk on 01.12.16.
//

#include <SFML/Graphics.hpp>
#include <memory>
#include "InputHandler.h"

std::shared_ptr<ICommand> InputHandler::handleInput() {
    // TODO there is smarter way to do this getting all keys from map but its late
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        return _commands[sf::Keyboard::D];
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        return _commands[sf::Keyboard::A];
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        return _commands[sf::Keyboard::W];
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        return _commands[sf::Keyboard::S];
    }
    return nullptr;
}

InputHandler::InputHandler() {}

InputHandler::~InputHandler() {

}

void InputHandler::addCommand(std::shared_ptr<ICommand> newCommand, sf::Keyboard::Key key) {
    _commands[key] = std::move(newCommand);
}
