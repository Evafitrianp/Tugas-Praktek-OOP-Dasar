#include "Date.h"
#include <iostream>
#include <iomanip>

Date::Date(int year, int month, int day)
    : year(year), month(month), day(day) {}

int Date::getYear() const {
    return year;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

void Date::setYear(int year) {
    this->year = year;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setDate(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

std::string Date::toString() const {
    std::ostringstream oss;
    oss << std::setfill('0') << std::setw(2) << month << "/"
        << std::setw(2) << day << "/" << std::setw(4) << year;
    return oss.str();
}


