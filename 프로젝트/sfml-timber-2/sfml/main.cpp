#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include <iostream>
#include "InputMgr.h"
#include <vector>
#include "ResourseMgr.h"

int main()
{

    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    std::vector<std::string> textures =
    {
        "graphics/axe.png",
        "graphics/background.png",
        "graphics/player.png"
    };

  
    ResourceMgr<sf::Texture>::Instance().Load(textures);

    sf::Sprite sprite;
    sprite.setTexture(ResourceMgr<sf::Texture>::Instance().Get("graphics/background.png"));
    sf::Sprite sprite1;
    sprite1.setTexture(ResourceMgr<sf::Texture>::Instance().Get("graphics/player.png"));
    sf::Sprite sprite2;
    sprite2.setTexture(ResourceMgr<sf::Texture>::Instance().Get("graphics/axe.png"));


    while (window.isOpen())
    {
        InputMgr::Clear();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            InputMgr::UpdateEvent(event);
        }

        // Update
        InputMgr::Update(0.f);

        if (InputMgr::GetKeyDown(sf::Keyboard::A))
        {
            std::cout << "Key Down: A" << std::endl;
        }

        if (InputMgr::GetKeyUp(sf::Keyboard::A))
        {
            std::cout << "Key Up: A" << std::endl;
        }

        if (InputMgr::GetKey(sf::Keyboard::A))
        {
            std::cout << "Key Held: A" << std::endl;
        }

        // Draw
        window.clear();
        window.draw(sprite);
        window.draw(sprite1);
        window.draw(sprite2);
        window.display();
    }

    return 0;
}