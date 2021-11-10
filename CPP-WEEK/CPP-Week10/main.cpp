#include <iostream>
#include <fstream>
#include "Employee.cpp"
#include <vector>
using namespace std;

int main()
{
    ofstream fout;
    fout.open ("employees.dat", ios::out | ios::app);
    if(!fout){
        cerr << "File open failed "<< endl;
        exit(1);
    }
    Employee employee1(101, "Dara", 20);
    Employee employee2(102, "Lina", 22);
    fout.write((char*)& employee1, sizeof(Employee));
    fout.write((char*)& employee2, sizeof(Employee));
    fout.close();
    //read objects from file
    ifstream fin;
    fin.open("employees/dat", ios::in);
    if(!fin){
        cerr << "file open failed" << endl;
        exit(1);

    }
    Employee employee;
    vector<Employee> employeeList;
    while(!fin.eof()){
        fin.read()
    }
    return 0;
}