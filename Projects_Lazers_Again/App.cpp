#include "App.hpp"


App::App()
: mWindow(sf::VideoMode(640, 360), "Light network simulator")
{

}

void App::run()
{
    while (mWindow.isOpen())
    {
        sf::Event currentEvent;
        while (mWindow.pollEvent(currentEvent))
        {
            if (currentEvent.type == sf::Event::Closed)
                mWindow.close();
        }
    }
}
