/*
 * File Name: rectangle.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#include <iostream>
#include <stdlib.h>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, const char *name, double side_a, double side_b)
    : Square(x, y, name, side_a)
{
    this->side_b = side_b;
}

Rectangle::Rectangle(const Rectangle &source)
    : Square(source.origin, source.shapeName, source.side_a)
{
    this->side_b = source.side_b;
}

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char *name)
    : Rectangle(x, y, name, side_a, side_b)
{
}

Rectangle &Rectangle::operator=(const Rectangle &rhs)
{
    if (this != &rhs)
    {
        Square::operator=(rhs);
        this->side_b = rhs.side_b;
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
