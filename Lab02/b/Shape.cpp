// File Name                         : Shape.cpp
// Assignment and exercise number    : Lab 2 Exercise B
// Lab section                       : B02
// Your name                         : Nimna Findlay
// Submission Date                   : Oct 2, 2023

#include "Shape.h"

using namespace std;

Shape::Shape(double x, double y, const char* name) {
    origin.setX(x);
    origin.setY(y);
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

const Point& Shape::getOrigin() const {
    return origin;
}

const char* Shape::getName() const {
    return shapeName;
}

void Shape::display() const {
    cout << "Shape Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getX() << endl;
    cout << "Y-coordinate: " << origin.getY() << endl;
}

double Shape::distance(Shape& other) {
    return origin.distance(other.getOrigin());
}

double Shape::distance(Shape& shape1, Shape& shape2) {
    return Point::distance(shape1.getOrigin(), shape2.getOrigin());
}

void Shape::move(double dx, double dy) {
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}

Shape::~Shape() {
    delete[] shapeName;
}
