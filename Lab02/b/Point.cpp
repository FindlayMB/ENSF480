//  File Name                         : Point.cpp
//  Assignment and exercise number    : Lab 2 Exercise B
//  Lab section                       : B02
//  Your name                         : Nimna Findlay
//  Submission Date                   : oct 2, 2023

#include <iostream>
#include <cmath>
#include "Point.h"

int Point::count = 1000;

Point::Point(double x, double y) : x(x), y(y), id(++count) {}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

int Point::getId() const {
    return id;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

void Point::display() const {
    std::cout << "X-coordinate: " << x << std::endl;
    std::cout << "Y-coordinate: " << y << std::endl;
}

int Point::counter() {
    return count - 1000; 
}

float Point::distance(const Point& point1, const Point& point2) {
    float dx = static_cast<float>(point1.x - point2.x);
    float dy = static_cast<float>(point1.y - point2.y);
    return std::sqrt(dx * dx + dy * dy);
}

float Point::distance(const Point& otherPoint) const {
    return distance(*this, other);

}

