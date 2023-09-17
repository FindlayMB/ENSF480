/*
 * File Name: human.h
 * Assignment: Lab 1 Exercise D
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */

#ifndef HUMAN
#define HUMAN

#include "point.h"
class Human
{

    // CAN WE CHANGE PROTECTED TO PRIVATE
protected:
    Point location; // Location of an object of Human on a Cartisian Plain
    char *name;     // A pointer that points to the start of a char array
                    // which holds Human's name, dynamically allocated
public:
    Human(const char *name = "", const double x = 0, const double y = 0);
    // Constructor

    ~Human();
    // Destructor
    // Destroys dynamically allocated char array that is
    // pointed to by name.

    const char *get_name() const; // Name getter
    // PROMISES:
    //   Return value points to first char in built-in string
    //   containing the chars of the string object.

    void set_name(const char *name); // Name setter

    const Point get_point() const; // Location getter

    void set_point(const double x, const double y);

    void display();
    // Display function
    // Displays human's name and location in a set format.
};

#endif