/* --------------------------- */
//  Joost van Bussum
//  1703423
//  Jorn Bunk

// Week 1 opdracht 2
/* --------------------------- */
#ifndef HOUSE_HPP
#define HOUSE_HPP

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "filled_rectangle.hpp"
#include "house.hpp"

/// \brief
/// ADT for a house
/// \details
/// ADT for making a house by using all the different "building" blocks already given
/// this includes: rectangle, line, filled_rectangle and window

class house {
private:
    int house_count, start_x, start_y, end_x, end_y;
    rectangle frame, door;
    line roof1, roof2;
    filled_rectangle window1, window2;
    window & w;
public:
    house(window & w, int house_count, int start_x, int start_y, int end_x, int end_y);
    print();
};

#endif