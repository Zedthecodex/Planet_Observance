#include <iostream>
using namespace std;

class UserAccount{
private:
    string username;
    string password;
    string role;
public:
    UserAccount():username("unknown"),password("unknown"),role("unknonw"){

    }
    UserAccount(string username, string password, string role):username(username), password(password), role(role){

    }
    //setter and getter methods

    //methods
    void display(){
        cout<<"Username: "<<username<<" Password: "<<password<<" Role: "<<role<<endl;
    }
};