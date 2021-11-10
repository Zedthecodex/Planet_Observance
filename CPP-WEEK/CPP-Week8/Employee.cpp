#pragma once

#include <iostream>
#include "Address.cpp"
#include "Date.cpp"
using namespace std;

class Employee{
private:
    //data members
    string name;
    Address address; //composition
    Date *date; //aggregation
    
public:
    //constructors
    Employee():name("unknown"),address("unknown","unknown"), date(nullptr){}
    Employee(string name):name(name){}
    Employee(string name, string street, string city):name(name),address(street, city){}
    Employee(string name, Address address):name(name){
          this->setAddress(address);
    }
    Employee(string name, Address address, Date *date):name(name){
        this->setAddress(address);
        this->setDate(date);
    }
    
//    ~Employee(){
//        cout<<"Destroying employee"<<endl;
//    }
    
    //setter and getter methods
    string getName(){
        return name;
    }
    void setName(string name){
        this->name=name;
    }
    
    Address getAddress(){
        return this->address;
    }
    
    void setAddress(string street, string city){
        this->address.setStreet(street);
        this->address.setCity(city);
    }
    
    void setAddress (Address address){
        this->address=address;
    }
    
    void setDate(int day, int month, int year){
        if(this->date!=nullptr){
            delete date;
        }
        this->date=new Date(day,month,year);
        
    }
        
    void setDate(Date *date){
//        if(this->date!=nullptr){
//                delete this->date;
//        }
        this->date=date;
    }
    
    //method members
    virtual void display(){
        cout<<"Name:"<<name;
        address.display();
        cout<<"Employee display"<<endl;
        // date->display();
    }

    virtual void getEmployee(){
           string name;
           string street;
           string city;
           cout<<"Enter name:";
           cin>>name;
           cout<<"Enter street:";
           cin>>street;
           cout<<"Enter city:";
           cin>>city;
           this->setName(name);
           this->setAddress(street, city);
    }
};
