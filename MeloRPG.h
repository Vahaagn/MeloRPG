//
// Created by matgi on 13.10.2016.
//

#ifndef MELORPG_MELORPG_H
#define MELORPG_MELORPG_H


#include <bits/unique_ptr.h>
#include <SFML/Graphics/RenderWindow.hpp>

class MeloRPG {
private:
    std::unique_ptr<sf::RenderWindow> _window;

public:
    void createWindow(int width, int height, std::string title);
    void start();

private:
    void update(sf::Time& game_time);
    void draw();
};


#endif //MELORPG_MELORPG_H
