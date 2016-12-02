//
// Created by matgi on 29.10.2016.
//

#ifndef MELORPG_ACTOR_H
#define MELORPG_ACTOR_H


#include "IActor.h"

class Actor : public IActor {
public:
    Actor(sf::Vector2f* position);

protected:
    virtual ~Actor();

public:
    virtual void moveBy(sf::Vector2f &amount) override;
    virtual void moveTo(sf::Vector2f &position) override;

// Accessors
public:
    virtual sf::Vector2f getPosition() const override;

private:
    sf::Vector2f* _position;
};


#endif //MELORPG_ACTOR_H
