//
// Created by fotoblysk on 13.10.16.
//

#ifndef MELORPG_ICOMPONENT_H
#define MELORPG_ICOMPONENT_H

#include "../GlobalDefs.h"

#include "IUpdatable.h"
#include "IDrawable.h"

class IComponent: public IUpdatable, public IDrawable {

};


#endif //MELORPG_ICOMPONENT_H
