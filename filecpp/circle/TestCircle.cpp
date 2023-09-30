/* A test driver for the Circle class (TestCircle.cpp)*/
#include <iostream>
#include "Circle.h"

using namespace std;

int main(){
    //Membuat sebuah instance dari Circle c1
    Circle c1(1.2, "red");
    cout<< "Radius=" << c1.getRadius() 
        << " Area=" << c1.getArea()
        << " Color=" << c1.getColor() <<endl;
    
    c1.setRadius(2.1); //Mengubah radius dan color c1
    c1.setColor("blue"); 
    cout<< "Radius=" << c1.getRadius()
        << " Area=" << c1.getArea()
        << " Color=" << c1.getColor() <<endl;

    //Membuat instance lain menggunakan konstuktor default
    Circle c2;
    cout<< "Radius=" << c2.getRadius()
        << " Area=" << c2.getArea()
        << " Color=" << c2.getColor() <<endl;
    
    return 0;
}