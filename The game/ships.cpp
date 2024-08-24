#include "ships.h"
#include "game.h"
#include <SFML/Graphics.hpp>
#include <bits/stdc++.h>
Basic_Ship::Basic_Ship(){
    which = 0;
    ship_t.loadFromFile("Ship1.png");
    ship_s.setTexture(ship_t);
    ship_s.setScale(4,4);
    ship_t1.loadFromFile("Ship1-1.png");
    ship_s1.setTexture(ship_t1);
    ship_s1.setScale(4,4);
}
    void Basic_Ship::moveUp(){
        if(ship_s.getPosition().y > 0){
            ship_s.move(0,-3.5);
            ship_s1.move(0,-3.5);
        }

    }

    void Basic_Ship::moveDn(){
        if(ship_s.getPosition().y < 530){
            ship_s.move(0,3.5);
            ship_s1.move(0,3.5);
        }
    }
    void Basic_Ship::Draw(sf::RenderWindow* app){
        if(which==0)
           app->draw(ship_s);
        else
            app->draw(ship_s1);
        which = !which;
    }
    void Basic_Ship::fire(){
        Laser shot(this);
        Active_Missiles_Vec.push_back(shot);
        Active_Missiles_Set.insert(&Active_Missiles_Vec.back());
    }






