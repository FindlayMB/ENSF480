/*
 * File Name: rectangle.cpp
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#include <iostream>
#include <stdlib.h>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, const char *name, double side_a, double side_b)
    : Square(x, y, name, side_a), Shape(x, y, name)
{
    this->side_b = side_b;
}

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char *name)
    : Rectangle(x, y, name, side_a, side_b)
{
}

Rectangle::Rectangle(Point origin, double side_a, double side_b, const char *name)
    : Square(origin, name, side_a),
      Shape(origin, name)
{
    this->side_b = side_b;
}

Rectangle::Rectangle(Point origin, const char *name, double side_a, double side_b)
    : Square(origin, name, side_a),
      Shape(origin, name)
{
    this->side_b = side_b;
}

Rectangle::Rectangle(const Rectangle &source)
    : Square(source),
      Shape(source)
{
    this->side_b = source.side_b;
}

Rectangle &Rectangle::operator=(const Rectangle &rhs)
{
    if (this != &rhs)
    {
        this->side_b = rhs.side_b;
        Square::operator=(rhs);
    }
    return *this;
}

double Rectangle::getSideB() const
{
    return this->side_b;
}

void Rectangle::setSideB(double side_b)
{
    this->side_b = side_b;
}

void Rectangle::display() const
{
    std::cout << "Rectangle Name:\t" << shapeName << std::endl;
    origin.display();
    std::cout << "Side-a:\t\t" << this->side_a << std::endl;
    std::cout << "Side-b:\t\t" << this->side_b << std::endl;
    std::cout << "Area:\t\t" << area() << std::endl;
    std::cout << "Perimeter:\t" << perimeter() << std::endl;
}

double Rectangle::area() const
{
    return (this->side_a * this->side_b);
}

double Rectangle::perimeter() const
{
    return (side_a * 2) + (side_b * 2);
}
