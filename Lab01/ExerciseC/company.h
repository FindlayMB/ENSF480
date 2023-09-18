/*
 * File Name: company.h
 * Assignment: Lab 1 Exercise C
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */
#ifndef COMPANY
#define COMPANY

#include <string>
#include <vector>

#include "employee.h"
#include "customer.h"
#include "address.h"
#include "date.h"
using namespace std;

class Company
{
    private:
        string companyName;

        Address companyAddress;

        Date dateEstablished;

        vector<Employee> employees;

        vector<Customer> customers;

    public:
        // Functions
};

#endif