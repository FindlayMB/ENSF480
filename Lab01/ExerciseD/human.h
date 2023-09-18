/*
 * File Name: human.h
 * Assignment: Lab 1 Exercise D
 * Lab Section: B02
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */

#ifndef HUMAN
#define HUMAN

#include "point.h"
class Human
{

private:
    Point location; // Location of an object of Human on a Cartisian Plain
    char *name;     // A pointer that points to the start of a char array
                    // which holds Human's name, dynamically allocated
public:
    /**
     * @brief Construct a new Human object
     *
     * @param name A char pointer that points to first char of a built-in string.
     * @param x x coordinate of a location on Cartisian Plain.
     * @param y y coordinate of a location on Cartisian Plain.
     */
    Human(const char *name = "", const double x = 0, const double y = 0);
    // Constructor
    // REQUIRES:
    //      x and y to be doubles if included as arguments.
    //      name points to first char of a built-in string.
    // PROMISES:
    //      Human object is created by copying chars from name and
    //      creating a Point object to store the human's location

    /**
     * @brief Destroy the Human object
     *
     */
    ~Human();
    // Destructor
    // Destroys dynamically allocated char array that is pointed to by name.

    /**
     * @brief Construct a new Human object
     *
     * @param source A reference to a Human object.
     */
    Human(const Human &source);
    // Copy constructor

    /**
     * @brief Copy Constructor
     *
     * @param source A reference to a Human object.
     * @return Human& to make this-object (object that this is pointing to)
     *        as a copy of source.
     */
    Human &operator=(const Human &source);
    // Assignment operator
    // REQUIRES: source is a reference to a Human object
    // PROMISES: to make this-object (object that this is pointing to)
    //           as a copy of source.

    /**
     * @brief Get the name object
     *
     * @return const char*
     */
    const char *get_name() const; // Name getter
    // PROMISES:
    //   Return value points to first char in built-in string
    //   containing the chars of the string object.

    /**
     * @brief Set the name object
     *
     * @param name
     */
    void set_name(const char *name);
    // Name setter
    // REQUIRES: name to point to a char array

    /**
     * @brief Get the point object
     *
     * @return const Point
     */
    const Point get_point() const; // Location getter
    // PROMISES:
    //   Returns the Point-object location

    /**
     * @brief Set the point object
     *
     * @param x
     * @param y
     */
    void set_point(const double x, const double y);
    // Sets both x and y of location based on the values of the arguments
    // REQUIRES: x and y to be doubles

    /**
     * @brief Displays human's name and location in a set format.
     *
     */
    void display();
    // Display function
    // Displays human's name and location in a set format.
};

#endif