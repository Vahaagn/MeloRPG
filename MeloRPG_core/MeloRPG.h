//
// Created by matgi on 13.10.2016.
//

#ifndef MELORPG_MELORPG_H
#define MELORPG_MELORPG_H


#include "GlobalDefs.h"
#include "Managers/ComponentManager.h"
#include <SFML/Graphics.hpp>
#include "Components/InputHandler.h"

class MeloRPG {
private:
    std::shared_ptr<sf::RenderWindow> _window;
    ComponentManager _componentManager;

public:
    MeloRPG();
    virtual ~MeloRPG();

public:
    void createWindow(int width, int height, std::string title);
    void start();

private:
    InputHandler handler;
    void update(sf::Time& game_time);
    void draw();

    void addMoveCommands(std::shared_ptr<IMovable> player);
};


#endif //MELORPG_MELORPG_H