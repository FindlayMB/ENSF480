/*
 * File Name: point.h
 * Assignment: Lab 1 Exercise D
 * Lab Section: B02
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */

#ifndef POINT
#define POINT

class Point
{
private:
    double x; // x coordinate of a location on Cartisian Plain
    double y; // y coordinate of a location on Cartisian Plain
public:
    /**
     * @brief Construct a new Point object
     * Creates a Point object with x = a and y = b
     *
     * @param a A double that is the x-coordinate.
     * @param b A double that is the y-coordinate.
     */
    Point(const double a = 0, const double b = 0);
    // PROMISES: Creates a Point object with x = a and y = b

    /**
     * @brief Construct a new Point object
     *
     * @param source An ordered pair of coordinates on the Cartisian Plain
     *               in the form (x, y)
     */
    Point(const Point &source);

    /**
     * @brief Get the x object
     *
     * @return const double
     */
    const double get_x() const;
    // PROMISES: The value of x as a double

    /**
     * @brief Get the y object
     *
     * @return const double
     */
    const double get_y() const;
    // PROMISES: The value of y as a double

    /**
     * @brief Set the x object
     *
     * @param a A double that is the new x-coordinate.
     */
    void set_x(const double a);
    // REQUIRES: a to be a double

    /**
     * @brief Set the y object
     *
     * @param b A double that is the new y-coordinate.
     */
    void set_y(const double b);
    // REQUIRES: b to be a double

    /**
     * @brief Set the point object
     *
     * @param a A double that is the new x-coordinate.
     * @param b A double that is the new y-coordinate.
     */
    void set_point(const double a, const double b);
    // REQUIRES: a & b to be doubles
};

#endif