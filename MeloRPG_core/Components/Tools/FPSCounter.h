//
// Created by fotoblysk on 16.10.16.
//

#ifndef MELORPG_FPSCOUNTER_H
#define MELORPG_FPSCOUNTER_H

#include <Components/IComponent.h>
#include <SFML/Graphics.hpp>

static const char* FPS_TEXT = "FPS: ";
static const sf::Time SAMPLE_TIME = sf::seconds(1);
static const sf::Color TEXT_COLOR = sf::Color::Magenta;
static const int TEXT_SIZE = 16;

class FPSCounter : public IComponent {
public:
    FPSCounter();

    virtual void update(sf::Time &elapsedTime, std::vector<sf::Event>& events) override;
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    int getFps() const;

private:
    void updateText();

    int _fpsCounter;
    int _lastFps;

    sf::Font _textFont;
    sf::Text _drawableText;
    sf::Time _summarizedTime;

    void initializeText();
};


#endif //MELORPG_FPSCOUNTER_H
