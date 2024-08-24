#pragma once
#ifndef MISSILES_H_INCLUDED
#define MISSILES_H_INCLUDED

#include "ships.h"
#include <bits/stdc++.h>
class Missile{
protected:
    virtual void Draw(sf::RenderWindow* app)=0;
    virtual void Move()=0;
    sf::Texture missile_t;
    sf::Sprite missile_s;
public:

    int speed;
    int dmg;
    friend void Move_Missiles(sf::RenderWindow* app);
};
class Laser : public Missile{
public:
    Laser(Ship* ship);
    void Draw(sf::RenderWindow* app);
    void Move();
    friend void Move_Missiles(sf::RenderWindow* app);
};
#endif // MISSILES_H_INCLUDED
