#include <iostream>
#include "UserAccountService.cpp"
using namespace std;

int main(){

    // string username;
    // string password;
    // string role;
    // cout<<"Enter username: ";
    // cin>>username;
    // cout<<"Enter password: ";
    // cin>>password;
    // cout<<"Enter role: ";
    // cin>>role;
    UserAccountService userAccountService;
    // userAccountService.saveUserAccount(username, password, role);
    vector<UserAccount> userAccounts=userAccountService.getUserAccounts();
    userAccountService.viewUserAccount(userAccounts);


    return 0;
}