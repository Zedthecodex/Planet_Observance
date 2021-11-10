#ifndef MAN_H
#define MAN_H0

#include <iostream>
#include <string> 



using namespace std;

class Man{
    
    public :
        
        string *name;
        int age;
        int length;
        int nextindex;

    

       Man();
       Man(string* name);
       ~Man();
        
       string& operator[] (int index);
       void add ( int val); 
       void add(string val) ;
       int size(); 


};

Man :: Man(string* name ) {
    this -> name = name;

}

Man :: Man()
{
    name = new string [5];
    for (int i = 0; i < 5 ; i++ ) 
        name[i] = "Unknown";
    length = 5;
    nextindex = 0;


}

Man :: ~Man ()
{
    delete[] name;
}

string& Man:: operator[] (int index)
{
    string *pnewa;
    if (index >= length)
    {
        pnewa = new string[index + 5];
        for ( int i =0; i < nextindex; i++) 
            pnewa[i] = name[i];
        for (int j = nextindex; j < index + 5; j++ )
            pnewa[j] = "Unknown";
        length = index + 5;
        delete[] name; 
        name = pnewa;

    }

    if ( index > nextindex)
        nextindex = index  + 1;
    return *(name + index);

}

void Man:: add(string val) {
    string* pnewa;
    if (nextindex ==length) {
        length = length + 5;
        pnewa = new string[length];
        for ( int i = 0; i < nextindex; i ++) 
            pnewa [i] = name[i];
        for ( int j = nextindex; j < length; j++)
            pnewa[j] = "0";
        delete [] name;
        name = pnewa;


    }
    name[ nextindex++] = val;
}

int Man :: size()
{
    return length;

}


#endif MAN_H