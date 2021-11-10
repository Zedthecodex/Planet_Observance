#include <iostream>
#include "EmployeeService.cpp"
#include "Employee.cpp"
#include "Address.cpp"
#include "Date.cpp"
#include "SalariedEmployee.cpp"
#include "HourlyEmployee.cpp"
using namespace std;

enum{
    SALARY_EMPLOYEE=1,
    HOURLY_EMPLOYEE
};

enum{
    ADD_EMPLOYEE=1,
    VIEW_EMPLOYEE,
    EDIT_EMPLOYEE,
    DELETE_EMPLOYEE,
    EXIT_PROGRAM
};

class Application{
    private:
        int choice=0;
        int option=0;
        int count=0;

        Employee *employees=new Employee[100];
        SalariedEmployee *salariedEmployee=nullptr;
        HourlyEmployee *hourlyEmployee=nullptr;
   

        EmployeeService employeeService;
   
    public:
        void run(){
            do{
        //CRUD: CREATE, READ, UPDATE, DELETE
        cout<<"WELCOME TO EMPLOYEE MANAGEMENT SYSTEM 1.0"<<endl;
        cout<<"ENTRY MENU"<<endl;
        cout<<"1. ADD EMPLOYEE"<<endl;
        cout<<"2. VIEW EMPLOYEE"<<endl;
        cout<<"3. EDIT EMPLOYEE"<<endl;
        cout<<"4. DELELE EMPLOYEE"<<endl;
        cout<<"5. EXIT"<<endl;
        cout<<"Please enter your choice";
        cin>>choice;
        switch(choice){
            case ADD_EMPLOYEE:
                cout<<"1. Salaried Employee"<<endl;
                cout<<"2. Hourly Employee"<<endl;
                cout<<"Please select your option:";
                cin>>option;
                    switch(option){
                        case SALARY_EMPLOYEE:
                            // salariedEmployee->getEmployee();
                            // employees[count]=*salariedEmployee;
                            // count++;
                            //
                            employeeService.addEmployee(salariedEmployee);
                            break;
                        case HOURLY_EMPLOYEE:
                            // hourlyEmployee->getEmployee();
                            // employees[count]=*hourlyEmployee;
                            // count++;
                            employeeService.addEmployee(hourlyEmployee);
                            break;
                    }
                break;

            case VIEW_EMPLOYEE:
                employeeService.viewEmployee();
                break;
            case EDIT_EMPLOYEE:
                employeeService.editEmployee("dara");
                break;
            case DELETE_EMPLOYEE:
                employeeService.deleteEmployee("dara");
                break;
            case EXIT_PROGRAM:
                break;
        }
    }while(choice!=5);

    cout<<"Program exit and Thank you"<<endl;
        }
};