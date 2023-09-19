/*
 * File Name: employee.h
 * Assignment: Lab 1 Exercise C
 * Lab Section: B02
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */
#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>
#include <vector>
#include "date.h"
#include "address.h"
using namespace std;

class Employee
{
private:
    enum State
    {
        active = 0,
        suspended,
        retired,
        fired
    };
    string name;
    Address address;
    Date dateOfBirth;
    State employmentStatus;

    // Functions
};

#endif