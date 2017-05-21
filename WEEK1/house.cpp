/* --------------------------- */
//  Joost van Bussum
//  1703423
//  Jorn Bunk

// Week 1 opdracht 2
/* --------------------------- */
#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "filled_rectangle.hpp"
#include "house.hpp"

/// \brief
/// make a house
/// \details
/// creating the house including all of it's "building" blocks
house::house(window & w, int house_count, int start_x, int start_y, int end_x, int end_y):
    frame (w, start_x, start_y, end_x, end_y),
    roof1 (w, start_x, start_y, end_x-(start_x/2), start_y/2+2),
    roof2 (w, end_x, start_y, end_x-(start_x/2), start_y/2+2),
    window1 (w, start_x+5, start_y+5, start_x+10, start_y+10),
    window2 (w, start_x+20, start_y+5, start_x+25, start_y+10),
    door (w, start_x+10, end_y-5, start_x+15, end_y),
    house_count(house_count),
    w(w)
{}

/// \brief
/// Print the house on the given window
house::print() {
    int i = 0;
    frame.print();
    roof1.print();
    roof2.print();
    window1.print();
    window2.print();
    door.print();
}
