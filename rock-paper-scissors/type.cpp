#include <iostream>

#include "type.hpp"

std::string Object::getName() const
{
  return name ;
}

bool Object::isBeaten( Object o ) const
{
  for ( auto a : weaknesses )
  {
    if ( o.getName() == a.getName() )
    {
      return true ;
    }
  }
  return false ;
}

Object::Object( const std::string n ): Object{std::vector<Object> {}, n } {}
Object::Object( const std::vector<Object> w, const std::string n ): weaknesses{w}, name{n} {}