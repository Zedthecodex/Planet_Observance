#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person{
protected:
    string name;

public:
    //constructors
    Person():name("unknown"){}
    Person(string name):name(name){}
    //method members
    void display(){
        cout<<"Name: "<<this->getName()<<endl;
    }
    //setter and getter methods
    string getName(){
        return this->name;
    }
    //operator overloading
    friend ostream& operator <<(ostream& out, Person& person){
        out<<"Name: "<<person.getName()<<endl;
        return out;
    }
    
    
};

#endif
