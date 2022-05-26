#include <string>
#include <vector>

#include "utilities.hpp"

bool isIn( std::string x, std::vector<std::string> v )
{
  for ( auto a : v )
  {
    if ( x == a )
    {
      return true ;
    }
  }
  return false ;
}

bool isIn( int x, std::vector<int> v )
{
  for ( auto a : v )
  {
    if ( x == a )
    {
      return true ;
    }
  }
  return false ;
}