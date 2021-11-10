#pragma once

#include <iostream>
#include "Employee.cpp"
using namespace std;

//Abstract Class
class EmployeeDAO{
public:
    //abstract methods
    virtual void addEmployee(Employee* employee)=0;
    virtual void viewEmployee()=0;
    virtual void editEmployee(string name)=0;
    virtual void deleteEmployee(string name)=0;

};