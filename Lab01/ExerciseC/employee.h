/*
 * File Name: employee.h
 * Assignment: Lab 1 Exercise C
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */
#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>
#include <vector>
#include "date.h"
using namespace std;

class Employee
{
private:
    enum State
    {
        active,
        suspended,
        retired,
        fired
    };
    string name;
    string address;
    string dateOfBirth;
    State employmentStatus;

    string ToString(State employmentStatus);

public:
    // Functions
    // string getStatus();
};

#endif