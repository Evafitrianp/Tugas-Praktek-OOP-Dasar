#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int year, month, day;

public:
    Date(int year = 1, int month = 1, int day = 1);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);
    std::string toString() const;
    void setDate(int year, int month, int day);
};

#endif  // DATE_H