
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class worker
{
 public:
 char name[30];
 int sal;
 void getdata(void)
 {
 cout<<"Enter Worker's name:";
 cin>>name;
 cout<<"Enter salary:";
 cin>>sal;
 }

};
int main()
{
//clear the screen

//declare the object
worker w;
//getdata for worker w
w.getdata();
//declare ofstream object.
ofstream ofile;
//open the ofile
ofile.open("Data.dat");
//save the data
ofile.write((char*)&w,sizeof(w));
//close ofile
ofile.close();
//declare ifstream object.
ifstream ifile;
//open the ifile.
ifile.open("Data.dat");
//new worker obj.
worker ww;
//read the data from file.
ifile.read((char*)&ww,sizeof(ww));
//close ifile
ifile.close();
//print
cout<<"Name:"<<ww.name<<endl;
cout<<"Salary:"<<ww.sal;
//get character
getch();
}