//
// Created by matgi on 29.10.2016.
//

#include "Player.h"

Player::Player() : Actor::Actor(new sf::Vector2f) {

}

Player::~Player() {
}

void Player::update(sf::Time &elapsedTime, std::vector<sf::Event>& events) {
    sf::Vector2f acceleration(0.F, 0.F);

    for (auto event : events) {
        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::D) {
           acceleration.x += 2.f;
        }
        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::A) {
            acceleration.x += -2.f;
        }

        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W) {
            acceleration.y += -2.f;
        }
        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S) {
            acceleration.y += 2.f;
        }
    }

    moveBy(acceleration);
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    sf::Vector2f size(50, 100);
    sf::RectangleShape rect(size);
    rect.setPosition(getPosition());
    rect.setFillColor(sf::Color::Green);

    target.draw(rect, states);
}
