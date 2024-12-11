#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include "Player.hpp"

class Game {
public:
    Game();  // Constructor
    void run();  // Main game loop

private:
    void processEvents();  // Handle events
    void update(sf::Time deltaTime);  // Update game logic
    void render();  // Render game objects

    sf::RenderWindow window;  // Window where everything is drawn
    Player player;  // Player object
    sf::Texture backgroundTexture;  // Texture for background
    sf::Sprite backgroundSprite;  // Sprite for background
};

#endif