/*
 * File Name: curveCut.cpp
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */
#include "curveCut.h"

CurveCut::CurveCut(double x, double y, const char *name, double side_a, double side_b, double radius)
    : Circle(x, y, name, radius),
      Rectangle(x, y, name, side_a, side_b),
      Square(x, y, name, side_a),
      Shape(x, y, name)
{
    assert(radius <= (side_a > side_b ? side_b : side_a));
}

CurveCut::CurveCut(double x, double y, double side_a, double side_b, double radius, const char *name)
    : Circle(x, y, name, radius),
      Rectangle(x, y, name, side_a, side_b),
      Square(x, y, name, side_a),
      Shape(x, y, name)
{
    assert(radius <= (side_a > side_b ? side_b : side_a));
}

CurveCut::CurveCut(const CurveCut &source)
    : Circle(source.origin, source.shapeName, source.radius),
      Rectangle(source.origin, source.shapeName, source.side_a, source.side_b),
      Square(source.origin, source.shapeName, source.side_a),
      Shape(source.origin, source.shapeName)
{
}

CurveCut &CurveCut::operator=(const CurveCut &rhs)
{
    if (this != &rhs)
    {
        Circle::operator=(rhs);
        Rectangle::operator=(rhs);
    }
    return *this;
}

void CurveCut::display() const
{
    std::cout << "CurveCut Name:\t" << this->shapeName << std::endl;
    origin.display();
    std::cout << "Width:\t\t" << this->side_a << std::endl;
    std::cout << "Length:\t\t" << this->side_b << std::endl;
    std::cout << "Radius of the cut: " << this->radius << std::endl;
}

double CurveCut::area() const
{
    // A = Arectangle - (1/4)Acircle
    return (Rectangle::area() - (0.25 * Circle::area()));
}

double CurveCut::perimeter() const
{
    // P = (1/4)Pcircle + Prectangle - 2Rcircle
    // Arectangle - (1/4)Acircle
    return ((0.25 * Circle::perimeter()) + Rectangle::perimeter() - 2 * this->radius);
}