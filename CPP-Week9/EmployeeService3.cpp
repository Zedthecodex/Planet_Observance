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
        // for(auto it=employees.begin();it!=employees.end();it++){
        //     (*it)->display();
        // }
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
        vector<Employee*>::iterator it;
         for(it=employees.begin();it!=employees.end();it++){
            if((*it)->getName().compare(name)==0){
                employees.erase(it);
                break;
            }
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