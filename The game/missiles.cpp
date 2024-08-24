#include <SFML/Graphics.hpp>
#include "missiles.h"
void Laser::Draw(sf::RenderWindow* app){
    app->draw(missile_s);
}
Laser::Laser(Ship* ship){
    ship->ship_s.getPosition().y;
    missile_t.loadFromFile("laser1.png");
    missile_s.setTexture(missile_t);
    missile_s.setPosition(ship->ship_s.getPosition());
    missile_s.setScale(3,3);
    speed = 5;
    dmg = 30;
}
void Laser::Move(){
    missile_s.move(speed,0);
}

