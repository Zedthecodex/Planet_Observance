
#include <iostream>
#include "Employee.cpp"
#include "Address.cpp"
#include "Date.cpp"
#include "SalariedEmployee.cpp"
#include "HourlyEmployee.cpp"
using namespace std;

int main() {

//    Employee employee("Dara");
//    employee.display();
//    employee.setName("Lina");
//    employee.display();
//
//    cout<<endl;
    
    Address address("S101", "PP");
    Date date(1,1,2021);
    //Employee employee2("Bora", address, &date);
    //employee2.display();
    cout<<endl;
    
    SalariedEmployee sEmployee("Dara", address, &date, 500);
    //sEmployee.display();
  
    cout<<endl;
    
    HourlyEmployee hEmployee("Lina", address, &date, 10, 20);
    //hEmployee.display();
    
    Employee *employee;
    employee=&sEmployee;
    employee->display();
    cout<<endl;
    
    employee=&hEmployee;
    employee->display();
    
    cout<<endl;
    
    return 0;
}
