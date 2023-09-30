/* The Circle class Implementation (Circle.cpp)*/
//Library yang digunakan
#include "Circle.h"

//Constructor
//Nilai default hanya boleh ditentukan dalam deklarasi, tidak dapat diulangi dalam definisi
Circle::Circle(double r, string c){
    radius = r;
    color = c;
}

//Public getter untuk radius
double Circle::getRadius() const{
    return radius;
}

//Public setter untuk radius
void Circle::setRadius(double r){
    radius = r;
}

//Public getter untuk color
string Circle::getColor() const{
    return color;
}

//Public setter untuk color
void Circle::setColor(string c){
    color = c;
}

//A public member fungtion
double Circle::getArea() const{
    return radius*radius*3.14159265;
}