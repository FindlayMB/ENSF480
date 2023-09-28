// File Name                         : Square.cpp
// Assignment and exercise number    : Lab 2 Exercise B
// Lab section                       : B02
// Your name                         : Nimna Findlay
// Submission Date                   : Oct 2, 2023

#include "Square.h"

using namespace std;

Square::Square(double x, double y, const char* name, double side) : Shape(x, y, name) {
    side_a = side;
}

double Square::getSide() const {
    return side_a;
}

void Square::setSide(double side) {
    side_a = side;
}

void Square::display() const {
    cout << "Square Name: " << getName() << endl;
    cout << "X-coordinate: " << getOrigin().getX() << endl;
    cout << "Y-coordinate: " << getOrigin().getY() << endl;
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << calculateArea() << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
}

double Square::calculateArea() const {
    return side_a * side_a;
}

double Square::calculatePerimeter() const {
    return side_a * 4;
}

Square::~Square() {
    // No need to delete name, it's handled by the base class destructor
}
