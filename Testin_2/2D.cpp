#include <iostream>
#include <vector>

using namespace std;

struct Man{
    int age;
    string name;


};

int main() 
{
    vector<Man> Mans;
    Mans.push_back(Man());

    Mans[0].name = "Piseth";

    Mans.push_back(Man());

    Mans[0].age = 15;

    cout << Mans[0].name << Mans[0].age << endl;


}