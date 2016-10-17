//
// Created by fotoblysk on 16.10.16.
//

#ifndef MELORPG_FPSCOUNTER_H
#define MELORPG_FPSCOUNTER_H


#include <Components/Interfaces/IComponent.h>
#include <SFML/Graphics.hpp>

class FPSCounter : public IComponent {
public:
    FPSCounter();

    virtual void update(sf::Time &elapsedTime) override;

    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    void setFPS() ;

private:
    int _counter;
    int _fps;
    sf::Font testFont;
    sf::Time _lastElpsedTime;

};


#endif //MELORPG_FPSCOUNTER_H
