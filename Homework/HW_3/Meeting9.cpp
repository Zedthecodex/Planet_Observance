#include <iostream>
#include  <string>
#include <array>
#include <string>
using namespace std;


//Exercise 1 : Member Functions, which are generated automatically
class Stupid
{
    private :
        
        string stuff;


    public :
    Stupid():stuff("Unknown") {}
    Stupid(string stuff  ): stuff(stuff){}
        void operator [] (const int index);
        void operator () (const string& index);

};

void Stupid::operator() (const string& index)
{
    size_t found = stuff.find(index);
    cout << "\nThe character was found at" << found << endl;

}

void Stupid::operator[] (const int index)
{
    cout << stuff[index];

}



int main ()
{
Stupid stuff{"Gun"};
stuff[2];
stuff("u");

return 0;

}