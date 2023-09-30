#include <iostream>
#include "Date.h"

int main() {
    // Test constructor and toString()
    Date d1(2020, 2, 8);
    std::cout << d1.toString() << std::endl;  // toString()
    // 02/08/2020

    // Test Setters and Getters
    d1.setYear(2012);
    d1.setMonth(12);
    d1.setDay(23);
    std::cout << d1.toString() << std::endl;
    // 12/23/2012
    std::cout << "Year is: " << d1.getYear() << std::endl;
    // Year is: 2012
    std::cout << "Month is: " << d1.getMonth() << std::endl;
    // Month is: 12
    std::cout << "Day is: " << d1.getDay() << std::endl;
    // Day is: 23

    // Test setDate()
    d1.setDate(2988, 1, 2);
    std::cout << d1.toString() << std::endl;
    // 01/02/2988

    return 0;
}