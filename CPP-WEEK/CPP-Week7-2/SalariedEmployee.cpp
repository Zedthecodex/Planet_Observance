#include <iostream>
#include "Employee.cpp"
using namespace std;

class SalariedEmployee: public Employee{
private:
    double salary;
public:
    SalariedEmployee():Employee(), salary(0){}
    SalariedEmployee(string name, Address address, Date *date, double salary):Employee(name, address, date), salary(salary){}
    
    //setter and getter methods
    
    
    void display(){
        Employee::display();
        cout<<" Salary: "<<salary;
    }
    
};
