#include "hwlib.hpp"

void kitt (hwlib::pin_in_out & led1, hwlib::pin_in_out & led2, hwlib::pin_in_out & led3, hwlib::pin_in_out & led4){
    led1.direction_set_output();
    led2.direction_set_output();
    led3.direction_set_output();
    led4.direction_set_output();
    
    while(1) {
        led3.set(0);
        led1.set(1);
        led2.set(1);
        hwlib::wait_ms(69);
        
        led1.set(0);
        led3.set(1);
        hwlib::wait_ms(69);
        
        led2.set(0);
        led4.set(1);
        hwlib::wait_ms(69);
        
        led4.set(0);
        led2.set(1);
        hwlib::wait_ms(69);
    }
}

int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
    
    auto led1 = hwlib::target::pin_in_out (1, 27);
    auto led2 = hwlib::target::pin_in_out (3, 8);
    auto led3 = hwlib::target::pin_in_out (3, 7);
    auto led4 = hwlib::target::pin_in_out (0, 28);
    
    
    kitt (led1, led2, led3, led4);
}
