//
// Created by fotoblysk on 01.12.16.
//

#include <SFML/Audio.hpp>
#include "MoveActorCommand.h"

#define DEFAULT_PLAYER_SPEED 300.f

MoveActorCommand::MoveActorCommand(Direction direction) {
    sf::Vector2f _moveVector(0, 0);
    if (direction & Direction::Up)
        _moveVector.y = DEFAULT_PLAYER_SPEED;
    else if (direction & Direction::Down)
        _moveVector.y = -DEFAULT_PLAYER_SPEED;
    if (direction & Direction::Right)
        _moveVector.x = DEFAULT_PLAYER_SPEED;
    else if (direction & Direction::Left)
        _moveVector.x = -DEFAULT_PLAYER_SPEED;
}

void MoveActorCommand::execute() {

}
