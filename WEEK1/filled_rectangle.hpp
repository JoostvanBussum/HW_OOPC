#ifndef FILLED_RECTANGLE_HPP
#define FILLED_RECTANGLE_HPP
#include "window.hpp"

/// @file

/// \brief
/// filled rectangle
/// \details
/// this set of functions create a filled rectangle and print them on the given window

class filled_rectangle {
private:
   int start_x;
   int start_y; 
   int end_x;
   int end_y;
   window & w;
public:
   filled_rectangle( window & w, int start_x, int start_y, int end_x, int end_y );
   void print();
};

#endif // FILLED_RECTANGLE_HPP