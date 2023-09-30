/* Header for the Time class (Time.h) */
#ifndef TIME_H   
#define TIME_H   

class Time {
private:  // private section
   // private data members
   int hour;     // 0 - 23
   int minute;   // 0 - 59
   int second;   // 0 - 59
 
public:   // public section
   // public member function prototypes
   Time(int h = 0, int m = 0, int s = 0); // Constructor with default values
   
   //public getter & setter untuk hour
   int getHour() const;   
   void setHour(int h);   
   //public getter & setter untuk minute
   int getMinute() const; 
   void setMinute(int m); 
   //public getter & setter untuk second
   int getSecond() const; 
   void setSecond(int s); 
   // set hour, minute and second
   void setTime(int h, int m, int s);   
   void print() const; // Print a description of this instance in "hh:mm:ss"
   void nextSecond();  // Increase this instance by one second
};  // need to terminate the class declaration with a semicolon
 
#endif  