#include <iostream>
#include "Person.cpp"
#include "Address.cpp"

using namespace std;

class Student: public Person{
private:
    double gpa;
    Address address;

public:
    Student():Person(),gpa(0){}
    Student(string name, double gpa):Person(name), gpa(gpa){}
    Student(string name, double gpa, Address& address):Person(name), gpa(gpa), address(address){}
    
    Address getAddress(){
        return this->address;
    }
    void setAddress(Address& address){
        this->address=address;
    }
    double getGPA(){
        return gpa;
    }
    void diplay(){
        Person::display();
        cout<<" GPA: "<<gpa<<"Address: "<<address;
       
    }
    
    //operator overloading
     friend ostream& operator <<(ostream& out, Student& student){
         out<<"Name: "<<student.getName()<<" GPA: "<<student.getGPA()<<endl;
         return out;
     }

};
