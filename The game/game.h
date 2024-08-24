#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <bits/stdc++.h>
#include "ships.h"
#include "missiles.h"

class BackGroud{
private:
    int cnt;
    sf::Texture bt;
    sf::Sprite bs;
public:
    BackGroud();

    void Move();

    void Draw(sf::RenderWindow* app);
};

extern std::set<Missile*> Active_Missiles_Set;

extern std::vector<Missile> Active_Missiles_Vec;

void Move_Missiles(sf::RenderWindow* app);
#endif // GAME_H_INCLUDED
