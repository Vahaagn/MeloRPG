//
// Created by matgi on 29.10.2016.
//

#include "Player.h"

#define DEFAULT_PLAYER_SPEED 300.f

Player::Player() : Actor::Actor(new sf::Vector2f) {

}

Player::~Player() {
}

void Player::update(sf::Time &elapsedTime, std::vector<sf::Event> &events) {
    sf::Vector2f loopMove(0.F, 0.F);
    loopMove.x = _acceleration.x * elapsedTime.asSeconds();
    loopMove.y = _acceleration.y * elapsedTime.asSeconds();
    _acceleration.x = 0;
    _acceleration.y = 0;
    moveBy(loopMove);
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    sf::Vector2f size(50, 100);
    sf::RectangleShape rect(size);
    rect.setPosition(getPosition());
    rect.setFillColor(sf::Color::Green);

    target.draw(rect, states);
}

void Player::changeNextMove(sf::Vector2f f) {
    _acceleration.x = f.x * DEFAULT_PLAYER_SPEED;
    _acceleration.y = f.y * DEFAULT_PLAYER_SPEED;
}


