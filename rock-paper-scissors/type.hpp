#ifndef TYPE_HPP
#define TYPE_HPP

#include <vector>
#include <string>

class Object
{
  public :
    std::string getName() const ;

    bool isBeaten( const Object o ) const ;

    Object() ;
    Object( const std::string n ) ;
    Object( const std::vector<Object> w, const std::string n ) ;

  protected :

  private :
    std::vector<Object> weaknesses ;
    std::string name ;
} ;

#endif // TYPE_HPP