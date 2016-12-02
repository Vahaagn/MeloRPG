//
// Created by fotoblysk on 01.12.16.
//

#ifndef MELORPG_MOVEACTORCOMMAND_H
#define MELORPG_MOVEACTORCOMMAND_H


#include "ICommand.h"

enum Direction{Up=0b1, Down=0b10, Left=0b100, Right=0b1000};

class MoveActorCommand : public ICommand{
public:
private:
    void execute() override;

public:
    MoveActorCommand(Direction direction);

    sf::Vector2f _moveVector;
};


#endif //MELORPG_MOVEACTORCOMMAND_H
