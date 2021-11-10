#include <iostream>
#include "Employee.cpp"
using namespace std;

class SalariedEmployee: public Employee{
private:
    double salary;
public:
    SalariedEmployee():Employee(), salary(0){}
    SalariedEmployee(string name, Address address, double salary):Employee(name, address), salary(salary){}
    SalariedEmployee(string name, string street, string city, double salary):Employee(name, street, city), salary(salary){}
    SalariedEmployee(string name, Address address, Date *date, double salary):Employee(name, address, date), salary(salary){}
    
    //setter and getter methods
    void setSalary(double salary){
        if(salary>0){
            this->salary=salary;
        }
    }
    double getSalary(){
        return this->salary;
    }
    
    void display(){
        Employee::display();
        cout<<" Salary: "<<this->getSalary();
        cout<<"SalarieEmployee display"<<endl;
    }

    void getEmployee(){
        Employee::getEmployee();
        cout<<"Enter salary:";
        cin>>salary;
        this->setSalary(salary);
    }
    
};
