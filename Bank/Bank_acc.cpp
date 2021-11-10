#include <iostream>
using namespace std;

class BankAccount{
    private:
        int accountNumber;
        string accountName;
        double accountBalance;
    public:
        BankAccount():accountNumber(0),accountName("Unknown"), accountBalance(0){}
        BankAccount(int accountNumber, string accountName, double accountBalance){
            this->accountNumber=accountNumber;
            this->accountName=accountName;
            this->accountBalance=accountBalance;
        }

        //setter and getter methods
        int getAccountNumber(){
            return accountNumber;
        }
        void setAccountNumber(int accountNumber ){
            this->accountNumber=accountNumber;
        }
        //methods

        void deposit(){
            double amount;
            cout<<"Enter deposit amount: ";
            cin>>amount;
            accountBalance+=amount;
        }
        void withdraw(){
            double amount;
            cout<<"Enter withdraw amount: ";
            cin>>amount;
            accountBalance-=amount;
        }



};