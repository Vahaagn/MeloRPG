//
// Created by fotoblysk on 13.10.16.
//

#ifndef MELORPG_IUPDATABLE_H
#define MELORPG_IUPDATABLE_H


#include <SFML/System/Time.hpp>

class IUpdatable {
    virtual void update(sf::Time &elapsedTime)=0;
};


#endif //MELORPG_IUPDATABLE_H
