#pragma once

#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Floor.h"
#include "Isaac.h"


using namespace sf;

class Game {
private:

    //Variables
    Event ev;

    //Function private
    void InitWindow();
    void InitVariable();
    void InitBackground();


public:
    //Window
    RenderWindow* window;
    RectangleShape background;
    Texture texture;

    //Constructor and Destructor
    Game();
    virtual ~Game();

    //Accessors
    const bool running() const;

    //Function public
    void pollEvents();
    void update();
    void render();

    //Map floor
    //TODO deve diventare un array di piani
    Floor floor;

    //Isaac
    Isaac Isaac;

};
