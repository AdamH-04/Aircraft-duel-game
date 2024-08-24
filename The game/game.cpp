 #include <SFML/Graphics.hpp>
 #include "game.h"
 #include <bits/stdc++.h>
 BackGroud::BackGroud(){
        cnt = 0;
        bt.loadFromFile("Space2.jpeg");
        bs.setTexture(bt);
        bs.setScale(0.5,0.5);
    }

    void BackGroud::Move(){
        bs.move(-1,0);
        cnt++;
        std::cout << cnt << '\n';
        if(cnt==1790){
            cnt = 0;
            bs.move(1790,0);
        }
    }
    void BackGroud::Draw(sf::RenderWindow* app){
        app->draw(bs);
    }

    std::set<Missile*>Active_Missiles_Set;

    void Move_Missiles(sf::RenderWindow* app){
        std::vector<Missile*>V;
        for(auto s:Active_Missiles_Set){
            if(s->missile_s.getPosition().x > 1000)
                V.push_back(s);
            else{
                s->Move();
                app->draw(s->missile_s);
            }
        }
        for(auto v:V)
            Active_Missiles_Set.erase(v);
    }
