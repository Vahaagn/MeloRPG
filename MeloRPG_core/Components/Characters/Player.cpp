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
    sf::Vector2f acceleration(0.F, 0.F);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        acceleration.x += DEFAULT_PLAYER_SPEED;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        acceleration.x += -DEFAULT_PLAYER_SPEED;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        acceleration.y += -DEFAULT_PLAYER_SPEED;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        acceleration.y += DEFAULT_PLAYER_SPEED;
    }
    acceleration.x*=elapsedTime.asSeconds();
    acceleration.y*=elapsedTime.asSeconds();
    moveBy(acceleration);
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    sf::Vector2f size(50, 100);
    sf::RectangleShape rect(size);
    rect.setPosition(getPosition());
    rect.setFillColor(sf::Color::Green);

    target.draw(rect, states);
}
