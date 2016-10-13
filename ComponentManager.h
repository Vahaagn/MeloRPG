//
// Created by fotoblysk on 13.10.16.
//

#ifndef MELORPG_COMPONENTMANAGER_H
#define MELORPG_COMPONENTMANAGER_H

#include <forward_list>
#include <memory>
#include <SFML/Graphics/RenderTarget.hpp>


class IComponent {
};

class ComponentManager {
    void addComponent(std::unique_ptr<IComponent>);

    std::forward_list<std::unique_ptr<IComponent>> components;

    void update();

    void draw(PtrRenderTarget target); // is RenderWindow a global scope??
};


#endif //MELORPG_COMPONENTMANAGER_H
