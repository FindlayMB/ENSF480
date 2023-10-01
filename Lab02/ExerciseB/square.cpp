/*
 * File Name: square.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#include <iostream>
#include <stdlib.h>
#include "square.h"

using namespace std;

Square::Square(double x, double y, const char *name, double side_a)
    : Shape(x, y, name)
{
    this->side_a = side_a;
}
Square::Square(double x, double y, double side_a, const char *name)
    : Square(x, y, name, side_a)
{
}
Square::Square(Point p, const char *name, double side_a)
    : Shape(p, name)
{
    this->side_a = side_a;
}
Square::Square(const Square &rhs)
    : Shape(rhs.origin, rhs.shapeName)
{
    this->side_a = rhs.side_a;
}

Square &Square::operator=(const Square &rhs)
{
    if (this != &rhs)
    {
        Shape::operator=(rhs);
        this->side_a = rhs.side_a;
    }
    return *this;
}

double Square::getSideA() const
{
    return this->side_a;
}

void Square::setSideA(double side_a)
{
    this->side_a = side_a;
}

void Square::display() const
{
    std::cout << "Square Name:\t" << shapeName << std::endl;
    origin.display();
    std::cout << "Side-a:\t\t" << side_a << std::endl;
    std::cout << "Area:\t\t" << area() << std::endl;
    std::cout << "Perimeter:\t" << perimeter() << std::endl;
}

double Square::area() const
{
    return (this->side_a * this->side_a);
}

double Square::perimeter() const
{
    return (this->side_a * 4);
}
