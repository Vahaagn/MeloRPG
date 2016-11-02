//
// Created by fotoblysk on 13.10.16.
//

#ifndef MELORPG_COMPONENTMANAGER_H
#define MELORPG_COMPONENTMANAGER_H

#include <forward_list>
#include "../GlobalDefs.h"
#include "Components/IComponent.h"

class ComponentManager {
private:
    std::forward_list<std::unique_ptr<IComponent>> _components;

public:
    void addComponent(std::unique_ptr<IComponent> component);

    void update(sf::Time &gameTime, std::vector<sf::Event>& events);

    void draw(PtrRenderTarget target); // is RenderWindow a global scope??
};


#endif //MELORPG_COMPONENTMANAGER_H
