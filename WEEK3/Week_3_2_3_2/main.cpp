#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.hpp"


int main(){
    window w( vector( 128, 64 ), 2 );
    wall muur(w, vector(0,0), vector(126,4), 1, vector(-1,1));
    wall muur1(w, vector(0,0), vector(4,63), 1, vector(1,-1));
    wall muur2(w, vector(123,0), vector(126,63), 1, vector(-1,1));
    wall muur3(w, vector(0,59), vector(126,63), 1, vector(1,-1));

    ball b( w, vector( 50, 20 ), 9, vector( 5, 2 ) );

   drawable * objects[] = { &b, &muur, &muur1, &muur2, &muur3};

   for(;;){
      w.clear();
        for(auto & p : objects) {
            p->draw();
        }
      wait_ms( 200 );
      for( auto & p : objects ){
          p->update();
      }
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}

