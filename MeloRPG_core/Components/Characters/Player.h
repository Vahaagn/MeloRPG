//
// Created by matgi on 29.10.2016.
//

#ifndef MELORPG_PLAYER_H
#define MELORPG_PLAYER_H

#include "Actor.h"

class Player : public Actor {
public:
    Player();
    virtual ~Player();

public:
    virtual void update(sf::Time &elapsedTime, std::vector<sf::Event>& events) override;

protected:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MELORPG_PLAYER_H
