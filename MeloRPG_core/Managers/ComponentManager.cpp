//
// Created by fotoblysk on 13.10.16.
//

#include "ComponentManager.h"

void ComponentManager::addComponent(std::unique_ptr<IComponent> component) {
    _components.push_front(std::unique_ptr<IComponent>(std::move(component)));
}

void ComponentManager::update(sf::Time &gameTime) {

}

void ComponentManager::draw(PtrRenderTarget target) {

}
