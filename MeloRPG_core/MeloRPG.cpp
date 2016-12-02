//
// Created by matgi on 13.10.2016.
//

#include <Components/Tools/FPSCounter.h>
#include <Components/Characters/Player.h>
#include <Components/InputHandler.h>
#include <Components/Commands/MoveActorCommand.h>
#include "MeloRPG.h"

MeloRPG::MeloRPG() {

}

MeloRPG::~MeloRPG() {

}

void MeloRPG::createWindow(int width, int height, std::string title) {
    sf::VideoMode videoMode(width, height);
    _window = std::shared_ptr<sf::RenderWindow>(new sf::RenderWindow(videoMode, title));
}

void MeloRPG::addMoveCommands(std::shared_ptr<IMovable> player_tmp) {
    handler.addCommand(std::shared_ptr<ICommand>(new MoveActorCommand(Direction::Up, player_tmp)), sf::Keyboard::W);
    handler.addCommand(std::shared_ptr<ICommand>(new MoveActorCommand(Direction::Down, player_tmp)), sf::Keyboard::S);
    handler.addCommand(std::shared_ptr<ICommand>(new MoveActorCommand(Direction::Left, player_tmp)), sf::Keyboard::A);
    handler.addCommand(std::shared_ptr<ICommand>(new MoveActorCommand(Direction::Right, player_tmp)), sf::Keyboard::D);
}

void MeloRPG::start() {
    sf::Clock timer;
    sf::Time elapsedTime;
    _componentManager.addComponent(std::shared_ptr<FPSCounter>(new FPSCounter));
    std::shared_ptr<Player> player_tmp(new Player);
    _componentManager.addComponent(std::shared_ptr<Player>(player_tmp), std::shared_ptr<Player>(player_tmp));
    addMoveCommands(player_tmp);
    while (_window->isOpen()) {
        elapsedTime = timer.restart();
        update(elapsedTime);
        draw();
    }
}

void MeloRPG::update(sf::Time &game_time) {
    sf::Event event;
    std::vector<sf::Event> events;
    while (_window->pollEvent(event)) {
        if (event.type == sf::Event::Closed ||
            (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
            _window->close();
        else {
            events.push_back(event);
        }
    }
    std::shared_ptr<ICommand> currentCommand(handler.handleInput());
    if (currentCommand != nullptr)
        currentCommand->execute();
    _componentManager.update(game_time, events);
}

void MeloRPG::draw() {
    _window->clear(sf::Color(100, 149, 237));

    _componentManager.draw(_window);

    _window->display();
}
