#include <iostream>
#include <string>



using namespace std;

enum{
    SALARY_EMPLOYEE = 1,
    HOURLY_EMPLYEE
};

enum{
    ADD_EMPLOYEE = 1,
    VIEW_EMPLOYEE,
    EDIT_EMPLOYEE,
    DELETE_EMPLOYEE,
    EXIT
};



int main() 
{

int choice = 0;

string name;
string street;
string city;

double salary;
double rate;
double hour;
    
    do{
        //CRUD : Create,Read ,Update, Delete
        cout << "Entry Menu" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. View Employess" << endl;
        cout << "3. Edit Employee "<< endl;
        cout << "4. Delete Employee" << endl;
        cout << "5. Exit " << endl;
        cout << "Please Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
            case ADD_EMPLOYEE:
                int option = 0;
                cout <<"1. Salaried Employee"<< endl;
                cout <<"2. Hourly Employee" << endl;
                cout <<"Please select your option: ";
                cin >> option;
                switch(option)
                {
                    case SALARY_EMPLOYEE:
                        cout << "Enter name :";
                        cin>> name;
                        cout << "Enter street: ";
                        cin >> street;
                        cout << "Enter city: ";
                        cin >> city;
                        cout << "Enter Salary:";
                        cin >> salary;
                        break;
                    case HOURLY_EMPLYEE :
                       cout << "Enter name :";
                        cin>> name;
                        cout << "Enter street: ";
                        cin >> street;
                        cout << "Enter city: ";
                        cin >> city;
                        cout << "Enter Rate :";
                        cin >> rate;
                        cout << "Enter Hour : ";
                        cin >> hour;
                        break;
                }
                break;
            case VIEW_EMPLOYEE:
                break;
            case EDIT_EMPLOYEE:
                break;
            case DELETE_EMPLOYEE:
                break;
            case EXIT: 
                break;

        }
    }while (choice !=5 );

    cout << "Program exit and Thank you " << endl;
    


}