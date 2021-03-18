#include <iostream>
using namespace std;

class Box {
public:

    Box(); // default constructor
    Box(double, double, double);  // parameter constructor
    double getVolume();
    void setLength(double length);
    void setBreadth(double breadth);
    void setHeight(double height);


    Box operator+(Box const&);  // addition operator overload, member function
    Box& operator++();          // pre-increment operator overload, member function

private:
    double length;      // Length of a box
    double breadth;     // Breadth of a box
    double height;      // Height of a box

friend ostream& operator << (ostream& out, Box& box); // stream insertion operator overload overload, firend function
friend Box& operator--(Box&); // pre-decrement operator overload, firend function

};
