
#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>

using namespace std;

class AccountNotFoundException:public exception{
private:
    string message;
public:
    AccountNotFoundException(){
        
    }
    AccountNotFoundException(string message){
        this->message=message;
    }
    
    
};
