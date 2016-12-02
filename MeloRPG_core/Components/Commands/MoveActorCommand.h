//
// Created by fotoblysk on 01.12.16.
//

#ifndef MELORPG_MOVEACTORCOMMAND_H
#define MELORPG_MOVEACTORCOMMAND_H


#include <Components/Characters/IActor.h>
#include <Utils/Direction.h>
#include "ICommand.h"


class MoveActorCommand : public ICommand {
public:
private:
    sf::Vector2f _moveVector;
    std::shared_ptr<IMovable> _actor;
public:
    MoveActorCommand(Direction direction, std::shared_ptr<IMovable> actor);

    void execute() override;
};


#endif //MELORPG_MOVEACTORCOMMAND_H
