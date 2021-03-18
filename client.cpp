#include "Box.h"

int main() {
    Box Box1;                // Instantiate Box1 of type Box
    Box Box2;                // Instantiate Box2 of type Box
    Box Box3;                // Instantiate Box3 of type Box
    double volume = 0.0;     // Store the volume of a box here

    // Box1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);
    cout << "**********Box1**********" << endl;
    cout << Box1;

    // Get the volume of Box1
    volume = Box1.getVolume();
    cout << "The volume of Box1 : " << volume << endl;

    Box1 = ++Box1;
    cout << "After implement the pre-increment operator:" << endl;
    cout << Box1;

    // Get the new volume of Box1
    volume = Box1.getVolume();
    cout << "The new volume of Box1 : " << volume << endl;
    

    // Box2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    cout << "**********Box2**********" << endl;
    cout << Box2;

    // Get the volume of Box2
    volume = Box2.getVolume();
    cout << "The volume of Box2 : " << volume << endl;

    Box2 = --Box2;
    cout << "After implement the pre-decrement operator:" << endl;
    cout << Box2;

    // Get the new volume of Box2
    volume = Box2.getVolume();
    cout << "The new volume of Box2 : " << volume << endl;


    // Add two Boxes as follows:
    Box3 = Box1 + Box2;

    cout << "**********Box3**********" << endl;
    cout << Box3;

    // Get the volume of Box3
    volume = Box3.getVolume();
    cout << "The volume of Box3 : " << volume << endl;

    return 0;
}