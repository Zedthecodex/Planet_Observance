#include <iostream>
#include <vector>
#include "Employee.cpp"
#include "DynamicArray.cpp"
using namespace std;

//Business logics
class EmployeeService{
private:
    //static array
    Employee *employees[100];
    int count=0;
    //User Defined DyanmicArray
    //DynamicArray<Employee*> employees;

    //vector
    //vector<Employee*> employees;

public:

    void addEmployee(Employee *employee){
        employees[count]=employee;
        count++;
        cout<<"Employee added successfully"<<endl;
    }
    void viewEmployee(){
        cout<<"Employee Info:"<<endl;
        for(int i=0;i<count;i++){
            employees[i]->display();
            cout<<endl;
        }
    }
    void editEmployee(string name){
        int index=findEmployeeName(name);
        if(index==-1){
            cout<<"Employee name was not found"<<endl;
        }else{
    
            employees[index]->getEmployee();
            cout<<"Employee edited successfully"<<endl;
        }
    }
    void deleteEmployee(string name){
        int index=findEmployeeName(name);
        if(index==-1){
            cout<<"Employee name was not found"<<endl;
        }else{
            for(int i=index;i<count-1;i++){
                employees[i]=employees[i+1];
            }
            count--;
            cout<<"Employee deleted successfully"<<endl;
        }
    }

    int findEmployeeName(string name){
        for(int i=0;i<count;i++){
            if(employees[i]->getName().compare(name)==0){
                return i;
            }
        }
        return -1;
    }
};