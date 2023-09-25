//  File Name                         : Shape.cpp
//  Assignment and exercise number    : Lab 2 Exercise B
//  Lab section                       : B02
//  Your name                         : Nimna Findlay
//  Submission Date                   : oct 2, 2023

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "Shape.h"


using namespace std;

Shape::Shape(int x, int y, char* name) {
    Point p(x, y);
    this->p = p;
    shapeName = name;
}

const Point& getOrigin() const {
    return p;
}

const char* getName() const {
    return name;
}

Shape::setName(char* name) {
    this->name = name;
}

Shape::display() {
    cout << "Shape Name: " << name << endl;
    cout << "X-coordinate: " << p.getX() << endl;
    cout << "Y-coordinate: " << p.getY() << endl;
}

Shape::distance(Shape& otherShape) {
    return p.distance(otherShape.getOrigin());
}

Shape::distance(Shape& shape1, Shape& shape2) {
    return Point::distance(shape1.getOrigin(), shape2.getOrigin());
}

Shape::move(double dx, double dy) {
    p.setX(p.getX() + dx);
    p.setY(p.getY() + dy);
}

Shape::~Shape() {
    delete[] name;
}