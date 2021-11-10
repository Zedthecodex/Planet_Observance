#include <iostream>
#include "Person.cpp"
#include "Student.cpp"
#include "instructor.cpp"


int main(){
    Student student("Dara",4);
    cout << student;

    Person person2("Me");
    person2.display();

    Instructor Teacher1("Un virak", 1000 );
    cout << Teacher1;


    return 0;
}