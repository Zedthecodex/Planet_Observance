#include <iostream>
using namespace std;

class Address
{
    public :
        string house;
        string street;
        string city; 
        int houseNo;
   
        Address(): house("Unknown"), street("Unknown"), city("Unknown"),houseNo(0) {}
        Address(int hNo, string house, string street, string city)
        {
            this -> houseNo = hNo;
            this -> house = house;
            this -> street = street;
            this -> city = city;

        }

};

class Person
{
    private : 
        Address* address;
        string name;

    public:
        Person(): name( "Unknown"){}
        
        Person(string name, Address* address)
        {
            this -> name = name;
            this -> address = address;

        }
    void display() 
    {
        cout << name << " " << " " << address -> houseNo << "  " 
            << address -> house << " " << address -> street 
            << " " << address -> city << endl;

    }


};


int main (void) {
Address add1 = Address(413,"seth house ", "Polaris ", "Phnom Penh");
Person p1 = Person ("Phal pichpisiddh address - > ", &add1);

p1.display();

}