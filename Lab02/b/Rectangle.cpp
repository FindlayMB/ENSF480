// File Name                         : Rectangle.cpp
// Assignment and exercise number    : Lab 2 Exercise B
// Lab section                       : B02
// Your name                         : Nimna Findlay
// Submission Date                   : Oct 2, 2023

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, const char* name, double sideA, double sideB) : Square(x, y, name, sideA) {
    side_b = sideB;
}

double Rectangle::getSideB() const {
    return side_b;
}

void Rectangle::setSideB(double sideB) {
    side_b = sideB;
}

void Rectangle::display() const {
    cout << "Rectangle Name: " << getName() << endl;
    cout << "X-coordinate: " << getOrigin().getX() << endl;
    cout << "Y-coordinate: " << getOrigin().getY() << endl;
    cout << "Side a: " << getSideA() << endl;
    cout << "Side b: " << side_b << endl;
    cout << "Area: " << calculateArea() << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
}

double Rectangle::calculateArea() const {
    return getSideA() * side_b;
}

double Rectangle::calculatePerimeter() const {
    return (getSideA() * 2) + (side_b * 2);
}

Rectangle::~Rectangle() {
}
