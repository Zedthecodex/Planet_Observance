#include <iostream>
#include "Employee.cpp"
using namespace std;

class HourlyEmployee: public Employee{
private:
    double rate;
    double hour;
public:
    HourlyEmployee():Employee(),rate(0), hour(0){}
    HourlyEmployee(string name, string street, string city, double rate, double hour):Employee(name, street, city),hour(hour),rate(rate){}
    HourlyEmployee(string name, Address address, double rate, double hour):Employee(name, address),hour(hour),rate(rate){}
    HourlyEmployee(string name, Address address, Date *date, double rate, double hour):Employee(name, address, date),hour(hour),rate(rate){}
    
    //seter and getter
    void setRate(double rate){
        if(rate>0){
            this->rate=rate;
        }
    }
    double getRate(){
        return rate;
    }

    void setHour(double hour){
        if(hour>0){
            this->hour=hour;
        }

    }
    double getHour(){
        return hour;
    }

    void display(){
        Employee::display();
        cout<<" Rate:"<<rate<<" Hour:"<<hour;
    }

    void getEmployee(){
        double rate;
        double hour;
        Employee::getEmployee();
           cout<<"Enter Rate:";
            cin>>rate;
            cout<<"Enter Hour:";
            cin>>hour;
            this->setHour(hour);
            this->setRate(rate);

    }
    
};
