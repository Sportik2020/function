#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
void initBat(sf::RectangleShape& bat, const sf::Color batColor, const sf::Vector2f batPosition)
{
	bat.setSize(batSize);
	bat.setFillColor(batColor);
	bat.setPosition(batPosition);
}
void initBall(sf::CircleShape& ball, const sf::Color ballCollor, const sf::Vector2f ballPosition)
{
	ball.setRadius(ballRadius);
	ball.setFillColor(ballColor);
	ball.setPosition(ballPosition);
}
void initText(sf::Text scoreTex, int score, sf::Font font, int charSize, const sf::Vector2f textStartPos){
	scoreTex.setString(std::to_string(score));
	scoreTex.setFont(font);
	scoreTex.setCharacterSize(64);
	scoreTex.setPosition(200.f, 10.f);
}
