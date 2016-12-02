//
// Created by fotoblysk on 13.10.16.
//

#include "ComponentManager.h"

void ComponentManager::addComponent(std::shared_ptr<IComponent> component, std::shared_ptr<IMovable> moveInterface) {
    _components.push_front(std::shared_ptr<IComponent>(std::move(component)));
    if (moveInterface != nullptr)
        _moveInterfaces.push_front(std::shared_ptr<IMovable>(std::move(moveInterface)));
}

void ComponentManager::update(sf::Time &gameTime, std::vector<sf::Event> &events) {
    for (auto &component: _components)
        component->update(gameTime, events);
}

void ComponentManager::draw(PtrRenderTarget target) {
    for (const auto &component: _components)
        target->draw(*component);
}
