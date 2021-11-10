#include <iostream>
using namespace std;

class Address{
private:
string house;
string street;
string city;
public:
Address():house("unknown"), street("unknown"), city("unknown"){}
Address(string house, string street, string city):house(house), street(street), city(city){}

string getHouse() const{
return house;
}
void setHouse(string house){
this->house=house;
}

string getStreet() const{
return street;
}
void setStreet(string street){
this->street=street;
}

string getCity() const{
return city;
}
void setCity(string city){
this->city=city;
}

void diplay(){
cout<<"House: "<<house<<" Street: "<<street<<" City: "<<city<<endl;
}
friend ostream& operator <<(ostream& out, Address& address){
out<<"House: "<<address.house<<" Street: "<<address.street<<" City: "<<address.city<<endl;
return out;
}



};