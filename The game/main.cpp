#include <SFML/Graphics.hpp>
#include <bits/stdc++.h>
#include "ships.h"
#include "missiles.h"
#include "game.h"

int main()
{
    sf::RenderWindow app(sf::VideoMode(1000, 650), "SFML window");
    app.setFramerateLimit(40);
    Ship* Player1;
    Basic_Ship basic1;
    Player1 = &basic1;
    BackGroud BG;

    while (app.isOpen())
    {
        sf::Event event;
        while (app.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                app.close();
            else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S){
                Player1->moveDn();
            }
            else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W){
                Player1->moveUp();
            }
            else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::D)
                Player1->fire();
        }

        app.clear(sf::Color(0,0,0,0));
        BG.Move();
        BG.Draw(&app);
        std::cout << Active_Missiles_Set.size() << '\n';
        Move_Missiles(&app);
        Player1->Draw(&app);
        app.display();
    }

    return EXIT_SUCCESS;
}
