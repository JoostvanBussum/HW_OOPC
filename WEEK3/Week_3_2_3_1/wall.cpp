#include "wall.hpp"
#include "rectangle.hpp"

/// \brief
/// wall constructor
/// \details
/// make a rectangle and assigning the update_interval value to a variable within the class
wall::wall(window & w, const vector & start, const vector & end , const int &update_interval):
    rectangle(w, start, end, 1),
    update_interval(update_interval)
{}

/// \brief
/// update status of the wall
/// \details
/// if the update_interval is equal to the update_count the wall will
/// change from filled to unfilled and vice versa and the update_interval
/// will be reset to 0

void wall::update() {
    if  (update_interval == update_count){
        filled = !filled;
        update_interval = 0;
    } else {
        update_interval++;
    }
}

/// \brief
/// draw rectangle on the screen

void wall::draw(){
    rectangle::draw();
}