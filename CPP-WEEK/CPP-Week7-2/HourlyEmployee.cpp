#include <iostream>
#include "Employee.cpp"
using namespace std;

class HourlyEmployee: public Employee{
private:
    double rate;
    double hour;
public:
    HourlyEmployee():Employee(),rate(0), hour(0){}
    HourlyEmployee(string name, Address address, Date *date, double rate, double hour):Employee(name, address, date),hour(hour),rate(rate){}
    
    void display(){
        Employee::display();
        cout<<" Rate:"<<rate<<" Hour:"<<hour;
    }
    
};
