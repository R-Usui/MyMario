#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

#include "Vec2.hpp"

unsigned const int WINDOW_WIDTH = 800;
unsigned const int WINDOW_HEIGHT = 600;

int main(int argc, char* argv[])
{

	auto v1 = Vec2(3, 4);
	std::cout << v1.length() << std::endl;
	v1.rotate(180);
	std::cout << v1 << std::endl;
	std::cout << v1.length() << std::endl;
	std::cout << v1.length() << std::endl;


	sf::VideoMode mode = sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT);
	auto tytle = "MyMario";
	auto style = sf::Style::Close;

	sf::RenderWindow window(mode, tytle, style);

	window.setFramerateLimit(60);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
				 
			case sf::Event::KeyPressed:

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				{
					window.close();
					break;
				}
				
			default:
				break;
			}
		}
	}

	return 0;
}
