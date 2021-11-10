#include <iostream>
#include <vector>

#include "Employee.cpp"
#include "DynamicArray.cpp"
#include "EmployeeDAO.cpp"
using namespace std;

//Business logics: crud
class EmployeeService : public EmployeeDAO{
private:

    //vector
    vector<Employee*> employees;

public:

    void addEmployee(Employee *employee){
        employees.push_back(employee);
    }
    void viewEmployee(){
        
        for(Employee* employee: employees){
            (*employee).display();
            //employee->display();
            cout<<endl;
        }
    }
    void editEmployee(string name){
        // for(auto it=employees.begin();it!=employees.end();it++){
        //     if((*it)->getName().compare(name)==0){
        //         (*it)->getEmployee();
        //         break;
        //     }
        // }

        //algoriths library
        //1.
        // auto it=find_if(employees.begin(), employees.end(), [&name](Employee& employee){
        //     return employee.getName()==name;
        // });

        //2.
        // auto it=find_if(employees.begin(), employees.end(), [&](Employee& employee)->bool{
        //     return employee.getName()==name;
        // });

        //3.
        // Employee employee;
        // auto it=find_if(employees.begin(), employees.end(), employee.isEqualName(name));

         //4.
        Employee employee;
        auto it=find_if(employees.begin(), employees.end(), employee(name));
        if(it!=employees.end()){
            (*it)->getEmployee();
        }

    }
    void deleteEmployee(string name){
        //algoriths library
        //1.
        // auto it=find_if(employees.begin(), employees.end(), [&name](Employee& employee){
        //     return employee.getName()==name;
        // });

        //2.
        // auto it=find_if(employees.begin(), employees.end(), [&](Employee& employee)->bool{
        //     return employee.getName()==name;
        // });

        //3.
        // Employee employee;
        // auto it=find_if(employees.begin(), employees.end(), employee.isEqualName(name));

         //4.
        Employee employee;
        auto it=find_if(employees.begin(), employees.end(), employee(name));
        if(it!=employees.end()){
           employees.erase(it);
        }

    }

    bool findEmployeeByName(string name){
        Employee employee;
        auto it=find_if(employees.begin(), employees.end(), employee(name));
        if(it!=employees.end()){
           return true;
        }else{
            return false;
        }
    }

    bool isEmployeeEmpty(){
        if(employees.empty()){
            return true;
        }else{
            return false;
        }
    }
};