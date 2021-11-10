
#include <iostream>
#include "Instructor.cpp"

using namespace std;

class Programmer: public Instructor{
private:
    double rates;
    double hours;
public:
    Programmer():Instructor(),rates(0),hours(0){}
    
    void display(){
        Instructor::display();
        Person::display();
        cout<<" Rate: "<<rates<<" Hours:"<<hours<<endl;
    }
    
    
    
};
