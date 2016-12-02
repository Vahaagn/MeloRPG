//
// Created by fotoblysk on 01.12.16.
//

#include <SFML/Audio.hpp>
#include "MoveActorCommand.h"


MoveActorCommand::MoveActorCommand(Direction direction, std::shared_ptr<IMovable> actor) : _actor(actor) {
    _moveVector.x = 0;
    _moveVector.y = 0;
    if (direction & Direction::Up && !(direction & Direction::Down))
        _moveVector.y = -1;
    else if (direction & Direction::Down)
        _moveVector.y = 1;
    if (direction & Direction::Right && !(direction & Direction::Left))
        _moveVector.x = 1;
    else if (direction & Direction::Left)
        _moveVector.x = -1;
}

void MoveActorCommand::execute() {
    _actor->changeNextMove(_moveVector);
}
