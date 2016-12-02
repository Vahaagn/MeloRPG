//
// Created by fotoblysk on 13.10.16.
//

#ifndef MELORPG_COMPONENTMANAGER_H
#define MELORPG_COMPONENTMANAGER_H

#include <forward_list>
#include "../GlobalDefs.h"
#include "Components/IComponent.h"
#include "IMovable.h"

class ComponentManager {
private:
    std::forward_list<std::shared_ptr<IComponent>> _components;
    std::forward_list<std::shared_ptr<IMovable>> _moveInterfaces;

public:
    void addComponent(std::shared_ptr<IComponent> component, std::shared_ptr<IMovable> moveInterface = nullptr);

    void update(sf::Time &gameTime, std::vector<sf::Event> &events);

    void draw(PtrRenderTarget target); // is RenderWindow a global scope??
};


#endif //MELORPG_COMPONENTMANAGER_H
