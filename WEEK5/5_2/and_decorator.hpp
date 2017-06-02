#ifndef AND_DECORATOR_HPP
#define AND_DECORATOR_HPP

#include "hwlib.hpp"

class and_decorator: public hwlib::pin_in {
private:

    hwlib::target::pin_in pin0;
    hwlib::target::pin_in pin1;
    
public:
     /// \brief
    /// and_decorator constrctor
    /// \details
    ///  assigning the slave values to the pin variables
    and_decorator(hwlib::target::pin_in& slave1, hwlib::target::pin_in& slave2):
        pin0(slave1),
        pin1(slave2)
    {}
    /// \brief
    /// check pins and return true or false
    /// \details
    /// Check both pins whether they return 1 or 0, if bith return a value of 1 this function will return True
    bool get(hwlib::buffering buffer = hwlib::buffering::buffered) {
        return(pin0.get() && pin1.get());
    }
};

#endif //AND_DECORATOR_HPP