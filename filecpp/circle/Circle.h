/*The Circle class Header (Circle.h)*/
//Library yang digunakan
#include <string>
using namespace std;

//Mendeklarasikan Circle class
class Circle{
private: //Hanya dapat diakses oleh anggota class ini
    //Private data anggota (variabel)
    double radius;
    string color;

public: //Dapat diakses oleh semua orang
    //Mendeklarasikan protoype fungsi anggota
    //Pembuat dengan nilai default
    Circle(double radius = 1.0, string color = "red");
 
    // Public getters & setters for private data members
    double getRadius() const;
    void setRadius(double radius);
    string getColor() const;
    void setColor(string color);

    //Public member Fungtion
    double getArea() const;
};