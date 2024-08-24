#pragma once
#ifndef SHIPS_H_INCLUDED
#define SHIPS_H_INCLUDED

#include <SFML/Graphics.hpp>

class Ship{
protected:
    sf::Texture ship_t;
    sf::Sprite ship_s;
    int hp;
    int speed;
public:

    virtual void fire()=0;
    virtual void moveUp()=0;
    virtual void moveDn()=0;
    virtual void Draw(sf::RenderWindow* app)=0;
    friend class Laser;


};

class Basic_Ship : public Ship{
private:
    sf::Texture ship_t1;
    sf::Sprite ship_s1;
    bool which;
public:

    Basic_Ship();
    void moveUp();
    void moveDn();
    void Draw(sf::RenderWindow* app);
    void fire();
};

#endif // SHIPS_H_INCLUDED
