#include <iostream>
using namespace std;

class DynamicArray{

private : 
     int size;
     int max;
     int *arrayHolder; 

public:
    DynamicArray(){
        this-> size =0;
        this-> max = 5;
        this -> arrayHolder = new int[5];

    }
    ~DynamicArray(){
        delete[] this -> arrayHolder;
    }

};
