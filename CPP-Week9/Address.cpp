#pragma once

#include <iostream>
using namespace std;

class Address{
private:
    string street;
    string city;
public:
    Address():street("unknown"),city("unknown"){}
    Address(string street, string city):street(street), city(city){}
    
//    ~Address(){
//        cout<<"Destroying address"<<endl;
//    }
    string getStreet(){
        return street;
    }
    void setStreet(string street){
        this->street=street;
    }
    string getCity(){
        return city;
    }
    void setCity(string city){
        this->city=city;
    }
    
    
    void display(){
        cout<<"Street:"<<street<<" City:"<<city;
    }
    
};
