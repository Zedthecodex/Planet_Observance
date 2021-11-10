#include <iostream>
#include <fstream>
#include "UserAccount.cpp"
#include <vector>
using namespace std;

class UserAccountService{
    public: 
        void saveUserAccount(string username, string password, string role)
        {
            UserAccount userAccount(username,password,role);
            ofstream fout;
            fout.open("useraccounts.dat", ios::out | ios::app | ios::binary);
            fout.write((char*)& userAccount, sizeof(UserAccount));
            fout.close();
        }
        vector<UserAccount> getUserAccounts(){
            vector <UserAccount> userAccounts;
            UserAccount userAccount;
            ifstream fin;
            fin.open("useraccounts.dat", ios::in |ios :: binary);
            while (fin.read((char*)& userAccount, sizeof(UserAccount)))
            {
                userAccounts.push_back(userAccount);
            }
            fin.close();
            return userAccounts;
        }

        void viewUserAccount()
        {
            vector <UserAccount> userAccounts = getUserAccounts();
        }
};