#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person{

    private :
        string name;
    
    public:
        //constructors
        Person():name( "Unknown") {}
        Person (string name) : name(name){}
        //method members
        void display(){
            cout << "Name: "<< this -> getName() << endl;


        }

    //setter and getter methods
    string getName(){
        return this -> name;

    }

    //Operator overloading 
    friend ostream& operator << (ostream& out, Person& person){
        out << "Name : " << person.getName() << endl;
        return out;
    }
};

#endif