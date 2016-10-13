//
// Created by fotoblysk on 13.10.16.
//

#ifndef MELORPG_COMPONENTMANAGER_H
#define MELORPG_COMPONENTMANAGER_H


#include <bits/forward_list.h>
#include <memory>

class IComponent;

class ComponentManager {
    std::forward_list<std::unique_ptr<IComponent>> components;
    void update();
    void draw(); // is RenderWindow a global scope??
};


#endif //MELORPG_COMPONENTMANAGER_H
