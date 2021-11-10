#include <iostream>
#include "Person.cpp"

using namespace std;

class Student:public Person{
    private :
        
        double gpa;
    public: 
    Student():Person(),gpa(0){}
    Student(string name, double gpa) : Person(name),gpa(gpa){}

    double getGPA(){
        return gpa;
    }

    void display(){
        Person::display();
        cout << "GPA: " << gpa << endl;
    }
       
    //operator overloading
    friend ostream& operator << (ostream& out, Student& student){
        out << "Name: " << student.getName() << endl << "GPA :" << student.getGPA() << endl;
        return out;
    }
    
};