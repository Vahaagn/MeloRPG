//
// Created by fotoblysk on 01.12.16.
//

#ifndef MELORPG_INPUTHANDLER_H
#define MELORPG_INPUTHANDLER_H


#include "Components/Commands/ICommand.h"
#include <memory>
class InputHandler {
public:
    InputHandler();

    void addCommand(std::shared_ptr<ICommand>, sf::Keyboard::Key name);      //TODO add change key feature
    std::map<sf::Keyboard::Key, std::shared_ptr<ICommand>> _commands;

    ~InputHandler();

    std::shared_ptr<ICommand> handleInput();                //TODO fix to shared pointers returning unique_ptr is bad
};


#endif //MELORPG_INPUTHANDLER_H
