
#include <iostream>
#include "Person.cpp"
#include "Student.cpp"
#include "Instructor.cpp"
#include "Programmer.cpp"

using namespace std;

int main() {
    
    // Person person;
    // cout<<person;

    // Person person2("Dara");
    // person2.display();
    
    // Student student("Lina", 3);
    // student.diplay();
    
    // Instructor instructor("Bora",500);
    // cout<<instructor;
    
    // Programmer programmer;

    Address address("h101", "s101","c101");
    Student student2("Makara", 4, address);
    student2.display();

    Student student3("Kaka", 4);
    student3.setAddress(address);
    student3.display();

    return 0;
}
