#pragma once

#include <iostream>
using namespace std;
class Date{
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year):day(day), month(month), year(year){}
    
    //setter and getter methods
    
    void display(){
        cout<<day<<"/"<<month<<"/"<<year;
    }
    
};
