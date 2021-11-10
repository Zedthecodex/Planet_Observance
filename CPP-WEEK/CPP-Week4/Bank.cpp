//
//  Bank.cpp
//  Test
//
//  Created by Virak Un on 8/23/21.
//  Copyright © 2021 step. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;

class Bank
{
private:
    int accountNumber;
    string accountName;
    double accountBalance;

public:
    Bank() :accountNumber(0), accountName("Unknown"), accountBalance(0) {}
    Bank(int accountNumber, string accountName, double accountBalance){
        setAccountNumber(accountNumber);
        setAccountName(accountName);
        setAccountBalance(accountBalance);
    }
    Bank(const Bank &bank){
        setAccountNumber(bank.accountNumber);
        setAccountName(bank.accountName);
        setAccountBalance(bank.accountBalance);
    }
    
    int getAccountNumber() const
    {
        return accountNumber;
    }
    void setAccountNumber(int accountNumber)
    {
        this->accountNumber = accountNumber;
    }
    string getAccountName() const
    {
        return accountName;
    }
    void setAccountName(string accountName)
    {
        this->accountName = accountName;
    }
    double getAccountBalance() const
    {
        return accountBalance;
    }
    void setAccountBalance(double accountBalance)
    {
        if (accountBalance >= 0){
            this->accountBalance = accountBalance;
        }else{
            this->accountBalance = 0;
        }
    }
    void display()
    {
        cout << accountName << " " << accountNumber << " " << accountBalance;
    }
    


    
};
