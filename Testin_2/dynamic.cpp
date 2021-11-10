#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

class Man
{
   public:
        int age;
        string name;

    
        Man(string name, int age)
        {
            this-> name = name;
            this-> age = age;


        }


};

class Room 
{
    private :
        Man* Man_details;
        int houseNo;
        vector<Man> Mans;
        int counter;

    public:
        Room(int houseNo,Man* Man_details)
    {
        this-> houseNo = houseNo;
        this-> Man_details = Man_details;

    }

    void addMan (Man *m)
    {
        Mans.push_back(m);
        
    }
    void display(){
        cout << "This is Room : " << houseNo 
        << endl <<  " Owner: "  << endl;

    }
};


int main() 
{
    Man Man1 = Man("Shapiro",50);
    Room Room5(5, &Man1);

    Room5.display();
    return 0;

}


