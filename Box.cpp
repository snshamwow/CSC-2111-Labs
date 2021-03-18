# include "Box.h"

Box::Box()
{
    //TODO: Complete the default constructor 
    //and set the member variables as 0.  5pts
    length = 0;
    breadth = 0;
    height = 0;
}

Box::Box(double length, double breadth, double height) {
    //TODO: Complete the parameter constructor 
    //and set the member variables.     5pts
    this->length = length;
    this->breadth = breadth;
    this->height = height;

}

double Box::getVolume() {
    //TODO: Complete the getVolume function and return the volume.
    // V = Length * Breadth * Height    5pts
    return length * breadth * height;
}

void Box::setLength(double length) {
    // TODO: Set the member variable length according to the parameter
    // by using this pointer.    5pts
    this->length = length;
}

void Box::setBreadth(double breadth) {
    // TODO: Set the member variable length according to the parameter
    // by using this pointer.    5pts
    this->breadth = breadth;
}

void Box::setHeight(double height) {
    // TODO: Set the member variable length according to the parameter
    // by using this pointer.  5pts
    this->height = height;
}

Box Box::operator+(Box const& other) {
    //TODO: Implement the addition operator overload as a member function
    //by adding  all the three member variables of two Box objects, respectively. 15pts
    Box boxTemp;
    boxTemp.length = this->length + other.length;
    boxTemp.breadth = this->breadth + other.breadth;
    boxTemp.height = this->height + other.height;
    return boxTemp;
}

Box& Box::operator++() {
    //TODO: Implement the pre-increment operator overload as a member function 15pts
    length = this->length + 1;
    breadth = this->breadth + 1;
    height = this->height + 1;
    return *this;
}


ostream& operator << (ostream& out, Box& box)
{   
    // TODO: Implement the stream insertion operator overload as a friend function. 
    // print the Length, Breadth, Height of the box. 25pts
    cout << "Length: " << box.length << endl;
    cout << "Breadth: " << box.breadth << endl;
    cout << "Height: " << box.height << endl;
    return out;
}

Box& operator--(Box& box) {
    if (box.length < 1 || box.breadth < 1 || box.height < 1)
        cout << "Can not decrease the variables samller than 1." << endl;
    //TODO: Implement the pre-decrement operator overload as a friend function
    //by decreasing all the three member variables by 1, respectively. 15pts
    else
    {
        box.length--;
        box.breadth--;
        box.height--;
        return box;
        
    }
}