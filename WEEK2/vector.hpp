#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "iostream"
/// @file

/// \brief
/// rational ADT
/// \details
/// this is an ADT that implements 2 values as a vector
class vector {
private:
    int x, y;
    
public:
    vector(int x = 0, int y = 0):
        x(x), y(y)
    {}

    vector operator+ ();
    vector operator+ (vector rhs);
    vector& operator+= (const vector& rhs);
    vector operator*(int g);
    vector& operator*=(int g);
    
    
    friend std::ostream & operator<<(std::ostream& lhs, const vector & rhs) {
        return lhs << "[" << rhs.x << "," << rhs.y << "]";
    }
    
    /// \brief
    /// compare 2 vectors
    /// \details
    /// This function compares 2 vectors and returns '1' or True if they both the 
    /// x and y of the vectors are the same
    bool operator==(const vector rhs) {
        return (rhs.x == x && rhs.y == y);
    }
};


#endif