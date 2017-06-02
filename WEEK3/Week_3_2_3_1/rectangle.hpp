// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"

class rectangle : public drawable {
protected:
    vector start;
   vector end;
   line left;
   line right;
   line top;
   line bottom;
   bool filled;
public:
   rectangle( window & w, const vector & start, const vector & end, bool filled );   
   void draw() override;
};


#endif // RECTANGLE_HPP
