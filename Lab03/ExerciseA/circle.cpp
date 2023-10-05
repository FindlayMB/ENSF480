/*
 * File Name: circle.cpp
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */
#include "circle.h"

Circle::Circle(double x, double y, const char *name, double radius)
    : Shape(x, y, name)
{
    this->radius = radius;
}

Circle::Circle(double x, double y, double radius, const char *name)
    : Circle(x, y, name, radius)
{
}

Circle::Circle(Point origin, const char *name, double radius)
    : Shape(origin, name)
{
    this->radius = radius;
}

Circle::Circle(Point origin, double radius, const char *name)
    : Circle(origin, name, radius)
{
}

Circle::Circle(const Circle &source)
    : Shape(source)
{
    this->radius = source.radius;
}

Circle &Circle::operator=(const Circle &rhs)
{
    if (this != &rhs)
    {
        Shape::operator=(rhs);
        this->radius = rhs.radius;
    }
    return *this;
}

double Circle::getRadius() const
{
    return this->radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

void Circle::display() const
{
    std::cout << "Circle Name:\t" << this->shapeName << std::endl;
    origin.display();
    std::cout << "Radius:\t\t" << this->radius << std::endl;
}

double Circle::area() const
{
    // A = pi*r^2
    return (M_PI * pow(this->radius, 2));
}

double Circle::perimeter() const
{
    // P = 2*pi*r
    return (2 * M_PI * this->radius);
}