#include "hwlib.hpp"

void change_led_amount (hwlib::pin_in_out & led1, hwlib::pin_in_out & led2, hwlib::pin_in_out & led3, hwlib::pin_in_out & led4,hwlib::pin_in_out & button1, hwlib::pin_in_out & button2) {
    int leds_on = 0;
    while(1) {
        if (button1.get() == 0) {
            if (leds_on == 1) {
                led1.set(0);
                leds_on--;
            } else if (leds_on == 2) {
                led2.set(0);
                leds_on--;
            } else if (leds_on == 3) {
                led3.set(0);
                leds_on--;
            } else if (leds_on == 4) {
                led4.set(0);
                leds_on--;
            }
        } else if (button2.get() == 0) {
            if (leds_on == 3) {
                led4.set(1);
                leds_on++;
            } else if (leds_on == 2) {
                led3.set(1);
                leds_on++;
            } else if (leds_on == 1) {
                led2.set(1);
                leds_on++;
            } else if (leds_on == 0) {
                led1.set(1);
                leds_on++;
            }
        }
        hwlib::wait_ms(125);
    }
}
int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
    
    auto led1 = hwlib::target::pin_in_out (1, 27);
    auto led2 = hwlib::target::pin_in_out (3, 8);
    auto led3 = hwlib::target::pin_in_out (3, 7);
    auto led4 = hwlib::target::pin_in_out (0, 28);
    auto button1 = hwlib::target::pin_in_out (2, 21);
    auto button2 = hwlib::target::pin_in_out (2, 22);
    
    
    led1.direction_set_output();
    led2.direction_set_output();
    led3.direction_set_output();
    led4.direction_set_output();
    button1.direction_set_input();
    button2.direction_set_input();
    
    change_led_amount(led1, led2, led3, led4, button1, button2);    
}
