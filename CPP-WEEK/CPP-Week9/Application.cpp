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
        EmployeeService employeeService;

        void showMenu(){
                cout<<"WELCOME TO EMPLOYEE MANAGEMENT SYSTEM 1.0"<<endl;
                cout<<"ENTRY MENU"<<endl;
                cout<<"1. ADD EMPLOYEE"<<endl;
                cout<<"2. VIEW EMPLOYEE"<<endl;
                cout<<"3. EDIT EMPLOYEE"<<endl;
                cout<<"4. DELELE EMPLOYEE"<<endl;
                cout<<"5. EXIT"<<endl;
        }

        int getCommand(){
            int choice;
            cout<<"Please enter your choice: ";
            cin>>choice;
            while(!isLegal(choice)){
                cout<<"Invalid choice, please enter again"<<endl;
                showMenu();
                cin>>choice;
            }
            return choice;
        }

        bool isLegal(int choice){
            return ((choice==1) || (choice==2) || choice==3 || (choice==4) || (choice==5));
        }

        string inputName(){
            string name;
            cout<<"Enter name: ";
            cin>>name;
            return name;
        }
   
    public:

        void run(){
            int choice=0;
            int option=0;
            string name;
            
            SalariedEmployee salariedEmployee;
            HourlyEmployee hourlyEmployee;

            
            do{
      
                showMenu();
                choice=getCommand();

                switch(choice){
                    case ADD_EMPLOYEE:
                        cout<<"1. Salaried Employee"<<endl;
                        cout<<"2. Hourly Employee"<<endl;
                        cout<<"Please select your option:";
                        cin>>option;
                        switch(option){
                                case SALARY_EMPLOYEE:
                                    salariedEmployee.getEmployee();
                                    employeeService.addEmployee(&salariedEmployee);
                                    break;
                                case HOURLY_EMPLOYEE:
                                    hourlyEmployee.getEmployee();
                                    employeeService.addEmployee(&hourlyEmployee);
                                    break;
                        }
                        break;

                    case VIEW_EMPLOYEE:
                        if(employeeService.isEmployeeEmpty()){
                            cout<<"There is no employees"<<endl;
                        }else{
                            employeeService.viewEmployee();
                        }
                        
                        break;
                    case EDIT_EMPLOYEE:
                        name=inputName();
                        if(employeeService.findEmployeeByName(name)){
                            employeeService.editEmployee(name);
                            cout<<"Employee has been edited"<<endl;
                        }else{
                            cout<<"Employee Name was not found"<<endl;
                        }
                        
                        break;
                    case DELETE_EMPLOYEE:
                        name=inputName();
                        if(employeeService.findEmployeeByName(name)){
                            employeeService.deleteEmployee(name);
                            cout<<"Employee has been delete"<<endl;
                        }else{
                            cout<<"Employee Name was not found"<<endl;
                        }
                        break;
                    case EXIT_PROGRAM:
                        break;
                }
            }while(choice!=5);

            cout<<"Program exit and Thank you"<<endl;

        }
};