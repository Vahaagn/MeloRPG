//
// Created by fotoblysk on 13.10.16.
//

#include "ComponentManager.h"

void ComponentManager::addComponent(std::unique_ptr<IComponent> component) {
    _components.push_front(std::unique_ptr<IComponent>(std::move(component)));
}

void ComponentManager::update(sf::Time &gameTime) {
    for(auto &component: _components)
        component->update(gameTime);
}

void ComponentManager::draw(PtrRenderTarget target) {
    for(const auto &component: _components)
        target->draw(*component);
}
