/*
 * File Name: shape.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#include "shape.h"

using namespace std;

Shape::Shape(double x, double y, const char *name)
    : origin(x, y)
{
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

Shape::Shape(Point origin, const char *name)
    : origin(origin)
{
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

Shape::Shape(const Shape &source)
    : origin(source.origin)
{
    this->shapeName = new char[strlen(source.shapeName) + 1];
    strcpy(this->shapeName, source.shapeName);
}

Shape &Shape::operator=(const Shape &rhs)
{
    if (this == &rhs)
        return *this;
    this->origin = rhs.origin;

    return *this;
}

Shape::~Shape()
{
    delete[] shapeName;
}

const Point &Shape::getOrigin() const
{
    return this->origin;
}

const char *Shape::getName() const
{
    return this->shapeName;
}

void Shape::setName(const char *name)
{
    this->shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

void Shape::display() const
{
    cout << "Shape Name:\t" << shapeName << endl;
    origin.display();
}

double Shape::distance(Shape &otherShape)
{
    return origin.distance(otherShape.getOrigin());
}

double Shape::distance(Shape &shape1, Shape &shape2)
{
    return Point::distance(shape1.getOrigin(), shape2.getOrigin());
}

void Shape::move(double dx, double dy)
{
    origin.move(dx, dy);
}
