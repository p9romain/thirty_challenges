#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "game.hpp"

int main()
{
  sf::Window w(sf::VideoMode(1080,720), "Test bb", sf::Style::Close | sf::Style::Resize ) ;

  return 0 ;
}