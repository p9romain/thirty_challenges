#include <iostream>
#include <vector>
#include <cstdlib>

#include "game.hpp"
#include "type.hpp"
#include "utilities.hpp"

void game()
{
  std::cout << std::endl ;
  std::cout << "/====================================================================\\" << std::endl ;

  std::vector<std::string> YES = {{ "yes", "y", "oui", "o" }} ;
  std::vector<int> BO = {{ 1, 3, 5, 7 }} ;
  std::vector<int> Obj = {{ 0, 1, 2 }} ;

  std::vector<Object> vect {{ Object { std::vector<Object> {{ Object { "Paper" } }}, "Rock" }, 
                              Object { std::vector<Object> {{ Object { "Scissors" } }}, "Paper" }, 
                              Object { std::vector<Object> {{ Object { "Rock" } }}, "Scissors" }, }} ;

  std::string s ;
  int n = 0, m = 0, j = 0, k = 0 ;

  do
  {
    std::cout << "Start a game ? (enter yes/y/oui/o, all in lowercase)." << std::endl ;
    std::cout << "If not, press CTRL+Z. " ;
    std::cin >> s ;
  } 
  while ( not isIn(s, YES) ) ;

  std::cout << std::endl ;

  do
  {
    do
    {
      std::cout << "BO1, BO3, BO5 or BO7 ? (choose 1, 3, 5 or 7). " ;
      std::cin >> n ;
    } 
    while ( not isIn(n, BO) ) ;

    std::cout << std::endl ;
    std::cout << "X--------------------------------------------------X" << std::endl ;
    std::cout << std::endl ;

    Object obj, objRand ;

    for ( int i = 0 ; i < n ; i++ )
    {
      do
      {
        do
        {
          std::cout << "Rock (0), Paper (1) or Scissors (2) ? " ;
          std::cin >> j ;
        } 
        while ( not isIn(j, Obj) ) ;

        obj = vect.at(j) ;

        k = std::rand() % vect.size() ;

        objRand = vect.at(k) ;

        std::cout << obj.getName() << " (you) vs " << objRand.getName() << std::endl ;

        if ( objRand.getName() == obj.getName() )
        {
          std::cout << "It's a draw ! Need to rematch this round." << std::endl ;
        }
      }
      while ( objRand.getName() == obj.getName() ) ;

      if ( not obj.isBeaten( objRand ) )
      {
        std::cout << "You've won this round." << std::endl ;
        m++ ;
      }
      else
      {
        std::cout << "You've lost this round." << std::endl ;
      }

      std::cout << std::endl ;
    }

    if ( m >= int( n / 2 ) + 1 )
    {
      std::cout << "Congratutlation, you won !" << std::endl ;
    }
    else
    {
      std::cout << "Sorry but you lost : you've won " << m << "/" << n << " games." << std::endl ;
    }
    
    std::cout << std::endl ;

    std::cout << "Start a new game ? (enter yes/y/oui/o)" << std::endl ;
    std::cout << "Anything will be count as a 'no'. " ;
    std::cin >> s ;
  } 
  while ( isIn(s, YES) ) ;

  std::cout << std::endl ;
  std::cout << "X--------------------------------------------------X" << std::endl ;
  std::cout << std::endl ;

  std::cout << "Bye !" << std::endl ;
  std::cout << "\\====================================================================/" << std::endl ;
  std::cout << std::endl ;
}