#include <iostream>
#include <SFML\Graphics.hpp>

#include "Player.h"

sf::ContextSettings SetUpContextSettings()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;	

	return settings;
}

int main()
{
	sf::ContextSettings settings = SetUpContextSettings();

	sf::RenderWindow window(sf::VideoMode(800, 600),"Nigger",sf::Style::Default, settings);	

	Player player;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(117, 227, 255));

		window.draw(*player.GetVArrayAddy(),*player.GetRStateAddy());

		window.display();
	}
}