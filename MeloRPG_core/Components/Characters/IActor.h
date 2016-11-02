//
// Created by matgi on 29.10.2016.
//

#ifndef MELORPG_IACTOR_H
#define MELORPG_IACTOR_H

#include "../IComponent.h"

class IActor : public IComponent {
public:
    virtual void moveBy(sf::Vector2f& amount) = 0;
    virtual void moveTo(sf::Vector2f& position) = 0;

    // Accessors
    virtual sf::Vector2f getPosition() const = 0;
};

#endif //MELORPG_IACTOR_H
