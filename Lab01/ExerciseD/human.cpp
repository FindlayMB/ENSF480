/*
 * File Name: human.cpp
 * Assignment: Lab 1 Exercise D
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */
#include "human.h"
#include <cstring>
#include <iostream>
using namespace std;

Human::Human(const char *name, const double x, const double y)
    : location(x, y)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Human::~Human() // Destructor
{
    delete[] this->name;
}

Human::Human(const Human &source)
    : location(source.location)
{
    this->name = new char[strlen(source.name) + 1];
    strcpy(this->name, source.name);
}

Human &Human::operator=(const Human &source)
{
    if (this == &source)
        return *this;
    delete[] this->name;
    this->name = new char[strlen(source.name) + 1];
    strcpy(this->name, source.name);
    this->location = source.get_point();

    return *this;
}

const char *Human::get_name() const
{
    return this->name;
}

void Human::set_name(const char *name)
{
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

const Point Human::get_point() const
{
    return this->location;
}

void Human::set_point(const double x, const double y)
{
    this->location.set_x(x);
    this->location.set_y(y);
}

void Human::display()
{
    cout << "Human Name: " << this->name << "\nHuman Location: "
         << this->location.get_x() << " ,"
         << this->location.get_y() << ".\n"
         << endl;
}