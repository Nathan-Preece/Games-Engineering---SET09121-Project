// Game.cpp
#include "Game.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

Game::Game() : window(sf::VideoMode(1024, 768), "RogueAscent") {
    // Load background image
    if (!backgroundTexture.loadFromFile("sprites/background.png")) {
        std::cerr << "Error loading background image" << std::endl;
    }
    backgroundSprite.setTexture(backgroundTexture);  // Set texture to sprite

    backgroundSprite.setTextureRect(sf::IntRect(0, 250, 1024, 768));
}

void Game::run() {
    sf::Clock clock; 

    while (window.isOpen()) {
        sf::Time deltaTime = clock.restart();  // Get time since last frame

        // Process events
        processEvents();

        // Update the player
        player.update(deltaTime);

        // Render the game scene
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
}

void Game::render() {
    window.clear();  // Clear the screen before drawing

    // Draw the background first
    window.draw(backgroundSprite);

    // Render the player
    player.render(window);

    // Display everything that was drawn to the window
    window.display();
}