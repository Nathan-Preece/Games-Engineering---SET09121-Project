#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>

class Player {
public:
    Player();  // Constructor to load the texture and set up the sprite
    void update(sf::Time deltaTime);  // Update the animation frame
    void render(sf::RenderWindow& window);  // Render the player sprite

private:
    sf::Texture texture;  // The texture holding the sprite sheet
    sf::Sprite sprite;    // The sprite to be drawn
    sf::Clock animationClock;  // To track the time for animation frame updates
    int currentFrame;  // Track the current frame of the animation
    float frameSpeed;  // Speed at which the animation frames change
    float movementSpeed;  // Speed at which the player moves
};

#endif