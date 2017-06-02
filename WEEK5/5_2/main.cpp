#include "hwlib.hpp"
#include "and_decorator.hpp"


int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;

    auto button1 = hwlib::target::pin_in(1,27);
    auto button2 = hwlib::target::pin_in(3,8);
    
    and_decorator decorator(button1, button2);
    
    while(1) {
        hwlib::cout << decorator.get();
            
        hwlib::wait_ms(400);
    }
}
