#include <SFML/Graphics.hpp>
#include "Player.hpp"
#include <iostream>

Player::Player() {
    // Load the sprite sheet
    if (!texture.loadFromFile("sprites/player.png")) {
        std::cerr << "Error loading player texture!" << std::endl;
    }

    // Set the texture on the sprite
    sprite.setTexture(texture);

    // Set initial position of the player
    sprite.setPosition(512.f, 384.f);

    // Initialize animation variables
    currentFrame = 0;  // Start with the first frame
    frameSpeed = 0.2f;  // Frame change interval in seconds

    // Initialize movement speed
    movementSpeed = 200.f;  // Move at 200 pixels per second
}

void Player::update(sf::Time deltaTime) {
        sf::Vector2f position = sprite.getPosition();

        // Process movement input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            position.x -= movementSpeed * deltaTime.asSeconds();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            position.x += movementSpeed * deltaTime.asSeconds();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            position.y -= movementSpeed * deltaTime.asSeconds();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            position.y += movementSpeed * deltaTime.asSeconds();
        }

        // Clamp position to window boundaries
        sf::FloatRect playerBounds = sprite.getGlobalBounds();
        const int windowWidth = 1024;
        const int windowHeight = 768;

        if (position.x < 0) position.x = 0;
        if (position.x + playerBounds.width > windowWidth) position.x = windowWidth - playerBounds.width;
        if (position.y < 0) position.y = 0;
        if (position.y + playerBounds.height > windowHeight) position.y = windowHeight - playerBounds.height;

        // Apply position
        sprite.setPosition(position);

    // Update the animation frame based on elapsed time
    if (animationClock.getElapsedTime().asSeconds() >= frameSpeed) {
        // Move to the next frame
        currentFrame++;
        if (currentFrame >= 4) {  // Assuming 4 frames for walking
            currentFrame = 0;  // Loop back to the first frame
        }

        // Set the texture rect to show the correct part of the sprite sheet
        int frameWidth = 100;  // Width of each frame
        int frameHeight = 100; // Height of each frame
        sprite.setTextureRect(sf::IntRect(currentFrame * frameWidth, 0, frameWidth, frameHeight));

        // Restart the animation clock to time the next frame change
        animationClock.restart();
    }
}

void Player::render(sf::RenderWindow& window) {
    window.draw(sprite);  // Draw the player sprite
}