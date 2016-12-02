//
// Created by fotoblysk on 02.12.16.
//

#ifndef MELORPG_IMOVABLE_H
#define MELORPG_IMOVABLE_H


#include <SFML/Audio.hpp>
#include <Utils/Direction.h>

class IMovable {
public:
    virtual void changeNextMove(sf::Vector2f) = 0;
};


#endif //MELORPG_IMOVABLE_H
