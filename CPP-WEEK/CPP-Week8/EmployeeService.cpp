#include <iostream>
#include "Employee.cpp"
using namespace std;

//Business logics
class EmployeeService{
private:
    Employee *employees=new Employee[100];
public:

    void addEmployee(Employee *employee){

    }
    void viewEmployee(){
                // for(int i=0;i<count;i++){
                //         employees[i].display();
                //         cout<<endl;
                //     }
        employees -> display();
    }
    void editEmployee(string name){

    }
    void deleteEmployee(string name){

    }
};