#ifndef WALL_HPP
#define WALL_HPP

#include "window.hpp"
#include "vector.hpp"
#include "line.hpp"
#include "drawable.hpp"
#include "rectangle.hpp"

class wall : public rectangle {
private:
    int update_interval = 0;
    int update_count = 3;

public:
    wall( window & w, const vector & start, const vector & end , const int & update_interval);
    
    int update_interval_get() {return update_interval;}
    int update_count_get() {return update_count;}
    
    int filled_get() {return filled;}
        
    void update() override;
    void draw() override;
};

#endif