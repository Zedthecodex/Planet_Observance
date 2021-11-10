
#include <iostream>
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

int main() {

    int choice=0;
    int option=0;
    Employee *employee=nullptr;
    SalariedEmployee salariedEmployee;
    HourlyEmployee hourlyEmployee;
   
    double salary;
    double rate;
    double hour;

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
                            salariedEmployee.getEmployee();
                            employee=&salariedEmployee;
                            cout<<"Salaried Employee"<<endl;
                            break;
                        case HOURLY_EMPLOYEE:
                            hourlyEmployee.getEmployee();
                            employee=&hourlyEmployee;
                            cout<<"Hourly Employee"<<endl;
                            break;
                    }
                break;

            case VIEW_EMPLOYEE:
                employee->display();
                break;
            case EDIT_EMPLOYEE:
                break;
            case DELETE_EMPLOYEE:
                break;
            case EXIT_PROGRAM:
                break;
        }
    }while(choice!=5);

    cout<<"Program exit and Thank you"<<endl;
    
    return 0;
}
