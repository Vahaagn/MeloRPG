//
// Created by fotoblysk on 16.10.16.
//

#ifndef MELORPG_FPSCOUNTER_H
#define MELORPG_FPSCOUNTER_H


#include <Components/Interfaces/IComponent.h>

class FPSCounter : public IComponent{
    virtual void update(sf::Time &elapsedTime) override;

    virtual void draw(RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MELORPG_FPSCOUNTER_H
