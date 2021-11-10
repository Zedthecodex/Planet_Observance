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
        vector<Employee*>::iterator it;
        for(it=employees.begin();it!=employees.end();it++){
            (*it)->display();
            cout<<endl;
        }
    }
    void editEmployee(string name){
        vector<Employee*>::iterator it;
         for(it=employees.begin();it!=employees.end();it++){
            if((*it)->getName().compare(name)==0){
                (*it)->getEmployee();
                break;
            }
        }
    }
    void deleteEmployee(string name){
        Employee employee;
        //option1: linear search
        auto it=find_if(employees.begin(), employees.end(), employee(name));
        

        //option1
        // auto it = find_if(employees.begin(), employees.end(), [&name](Employee& o){
        //     return (o.getName() == name);
        // });

        //option2
        //auto it = find_if (employees.begin(), employees.end(), [&](Employee* o) -> bool {return o->getName() == name;});

        if(it!=employees.end()){
            employees.erase(it);
        }else{
            cout<<"no found"<<endl;
        }
        

    }

    bool findEmployeeByName(string name){
        vector<Employee*>::iterator it;
        for(it=employees.begin();it!=employees.end();it++){
            if((*it)->getName().compare(name)==0){
                return true;
            }
        }
        return false;
    }

    bool isEmployeeEmpty(){
        if(employees.empty()){
            return true;
        }else{
            return false;
        }
    }
};