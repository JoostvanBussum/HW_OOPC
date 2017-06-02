#include "vector.hpp"

/// \brief
/// return vector
vector vector::operator+(){ 
    return vector(x,y);
}

/// \brief
/// add a vector to another vector
/// \details
/// this operator+ adds a vector to a vector
vector vector::operator+(vector rhs){
    return vector(rhs.x + x, rhs.y + y);
}

/// \brief
/// add a vector on top of another vector
/// \details
/// this operator+= adds a vector to an existing vector
vector& vector::operator+=(const vector& rhs){
    x += rhs.x;
    y += rhs.y;
    return *this;
}

/// \brief
/// multiplies a vector by an int
/// \details
/// this operator* multiplies a vector by an integer value
vector vector::operator*(int g){
    return vector(x * g,y * g);
}

/// \brief
/// multiplies a vector by an integer
/// \details
/// this operator*= multiplies a vector by an integer value
vector& vector::operator*=(int g){
    x *= g;
    y *= g;
    return *this;
}
