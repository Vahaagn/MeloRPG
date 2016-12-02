//
// Created by fotoblysk on 01.12.16.
//

#ifndef MELORPG_INPUTHANDLER_H
#define MELORPG_INPUTHANDLER_H


#include "Components/Commands/ICommand.h"

class InputHandler {
public:
    InputHandler();
    ICommand* handleInput();
};


#endif //MELORPG_INPUTHANDLER_H
