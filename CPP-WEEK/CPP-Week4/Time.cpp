#include <iostream>
using namespace std;

//class name
class Time{
private:
    //data members
    int hours;
    int minutes;
    int seconds;
public:
    //constructors
    Time():hours(0),minutes(0),seconds(0){}
    Time(int hours, int minutes, int seconds):hours(hours),minutes(minutes),seconds(seconds){}
    Time(int s){
        hours=s/3600;
        s=s%3600;
        minutes=s/60;
        seconds=s%60;
    }
    
    
    //overloading operators
//    Time operator+(Time time){
//        int i1=hours*3600 + minutes*60 + seconds;
//        int i2=time.hours*3600 + time.minutes*60 + time.seconds;
//        return Time(i1+i2);
//    }

    
    friend ostream& operator<<(ostream& out, Time &time){
        out<<time.hours<<":"<<time.minutes<<":"<<time.seconds;
        return out;
    }
    
    friend istream& operator>>(istream& in, Time &time){
        cout<<"Enter hours: ";
        in>>time.hours;
        cout<<"Enter minutes: ";
        in>>time.minutes;
        cout<<"Enter seconds: ";
        in>>time.seconds;
        return in;
    }
    
    friend Time operator+(Time time1, Time time2){
        int i1=time1.hours*3600 + time1.minutes*60 + time1.seconds;
        int i2=time2.hours*3600 + time2.minutes*60 + time2.seconds;
        return Time(i1+i2);
    }
    
};


