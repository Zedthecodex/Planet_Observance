#include <iostream>
using namespace std;

class Student{
private:
int id;
string name;
int age;
public:
//default constructor
Student(): id(0),name("unknown"),age(0){}
Student(int id, string name, int age){
setId(id);
setName(name);
setAge(age);
}
Student(Student &student):id(student.id),name(student.name),age(student.age){}

//setter and getter methods
int getId() const{
return id;
}
void setId(int id){
this->id=id;
}
string getName() const{
return name;
}
void setName(string name){
this->name=name;
}
int getAge() const{
return age;
}
void setAge(int age){
if(age>0 && age<120){
this->age=age;
}else{
this->age=0;
}
}

void displayStudent(){
cout<<"ID: "<<getId()<< " Name: "<<getName()<<" Age: "<<getAge()<<endl;
}
};

// int main(){
// Student student;
// int id;
// string name;
// int age;
// int ned;
// cout<<"Enter ID: ";
// cin>>id;
// cout<<"Enter name: ";
// cin>>name;
// cin.get();
// cout<<"Enter age: ";

// cin>>age;

// student.setId(101);
// student.setName("Dara");
// student.setAge(30);



// cout<<"ID: "<<student.getId()<< " Name: "<<student.getName()<<" Age: "<<student.getAge()<<endl;




// }
