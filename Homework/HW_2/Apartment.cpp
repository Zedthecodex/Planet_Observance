
#include <iostream>
#include "Man.cpp"
using namespace std;

// class Man{

//      public :
//         string name;
    
  

//         // Man() : name( "Unknown") {}
//         Man(string name){
//             this-> name = name;
//         }

// };
class Apartment
{
  public :
        int houseNo;
        Man* Man_details;


     


        Apartment(): houseNo(0) {}
        Apartment(int houseNo, Man* Man_details)
        {
            this -> houseNo = houseNo;
            this -> Man_details = Man_details;

        }
        
        
        Apartment(int houseNo) {
            this -> houseNo = houseNo;

        }

    void display () 
    {
        cout << "This is Room : " << houseNo << endl;
        cout << "Owner : " << Man_details -> name << endl;
    }

    


};


