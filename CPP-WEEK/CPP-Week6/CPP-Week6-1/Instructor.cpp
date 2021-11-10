#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include "Person.cpp"
using namespace std;

class Instructor: public Person{
    private:
        double salary;
    public:
        Instructor():Person(), salary(0){}
        Instructor(string name, double salary):Person(name), salary(salary){}
    
        void display(){
            Person::display();
            cout<<" Salary: "<<salary<<endl;
            cout<<name<<endl;
        }
        
        friend ostream& operator <<(ostream& out, Instructor& instructor){
            out<<"Name:"<<instructor.getName()<<" Salary: "<<instructor.salary<<endl;
            return out;
        }
};

#endif
