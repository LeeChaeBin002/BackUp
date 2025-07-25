#include "stdafx.h"
#include "SceneGame.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");
    
    std::vector<std::string> texIds = {
        "graphics/player.png",
        "graphics/background.png"
    };
    TEXTURE_MGR.Load(texIds);
    FONT_MGR.Load("fonts/KOMIKAP_.ttf");

    SceneGame sceneGame;
    sceneGame.Init();
    sceneGame.Enter();

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

        sceneGame.Update(0.f);

        // Draw
        window.clear();
        sceneGame.Draw(window);
        window.display();
    }

    sceneGame.Release();
    return 0;
}