#include<iostream>
#include<SFML/Graphics.hpp>
int main()
{
	sf::RenderWindow window{ sf::VideoMode{sf::Vector2u{1280,720}},L"Title",sf::State::Windowed };
	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				window.close();
			}
		}
	}
	window.clear();
	window.close();
	return 0;
}