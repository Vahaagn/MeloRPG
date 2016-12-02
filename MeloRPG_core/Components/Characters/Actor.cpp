//
// Created by matgi on 29.10.2016.
//

#include "Actor.h"

Actor::Actor(sf::Vector2f* position) : _position(position) {

}

Actor::~Actor() {
    delete _position;
}

void Actor::moveBy(sf::Vector2f &amount) {
    *_position += amount;
}

void Actor::moveTo(sf::Vector2f &position) {
    *_position = position;
}

sf::Vector2f Actor::getPosition() const {
    return *_position;
}
