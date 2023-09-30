/* Implementation for the Time Class (Time.cpp) */
#include <iostream>
#include <iomanip>
#include "Time.h"    // include header of Time class
using namespace std;
 
// Constructor with default values. No input validation
Time::Time(int h, int m, int s) {
   hour = h;
   minute = m;
   second = s;
}
 
// public getter untuk hour
int Time::getHour() const {
   return hour;
}
// public setter untuk hour. No input validation
void Time::setHour(int h) {
   hour = h;
}
 
// public getter untuk minute
int Time::getMinute() const {
   return minute;
}
// public setter untuk minute. No input validation
void Time::setMinute(int m) {
   minute = m;
}
 
// public getter untuk second
int Time::getSecond() const {
   return second;
}
// public setter untuk second. No input validation
void Time::setSecond(int s) {
   second = s;
}
 
// Set hour, minute and second. No input validation
void Time::setTime(int h, int m, int s) {
   hour = h;
   minute = m;
   second = s;
}
 
// Print this Time instance in the format of "hh:mm:ss", zero filled
void Time::print() const {
   cout << setfill('0');    // zero-filled, need <iomanip>, sticky
   cout << setw(2) << hour  // set width to 2 spaces, need <iomanip>, non-sticky
        << ":" << setw(2) << minute
        << ":" << setw(2) << second << endl;
}
 
// Increase this instance by one second
void Time::nextSecond() {
   ++second;
   if (second >= 60) {
      second = 0;
      ++minute;
   }
   if (minute >= 60) {
      minute = 0;
      ++hour;
   }
   if (hour >= 24) {
      hour = 0;
   }
}