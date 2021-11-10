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
Bank() :accountNumber(0), accountName("Unknown"), accountBalance(0) { ; }

Bank(int accountNumber, string accountName, double accountBalance)
{
this->accountNumber = accountNumber;
this->accountName = accountName;
this->accountBalance = accountBalance;
}

int getAccountNumber() { return accountNumber; }
void setAccountNumber(int accountNumber) { this->accountNumber = accountNumber; }
string getAccountName() { return accountName; }
void setAccountName(string accountName) { this->accountName = accountName; }
double getAccountBalance() { return accountBalance; }
void setAccountBalance(double accountBalance)
{
if (accountBalance >= 0) this->accountBalance = accountBalance;
else this->accountBalance = 0;
}

void create()
{
cout << accountName << " " << accountNumber << " " << accountBalance;
}
};


int main()
{
cout << "Welcome to HPN Bank!\n";
Bank bank;

int accountNumber;
string accountName;
double accountBalance;

cout << "Enter name "; cin >> accountName;
cout << "Enter acc number "; cin >> accountNumber;
cout << "Enter amount "; cin >> accountBalance;

bank.setAccountName(accountName);
bank.setAccountNumber(accountNumber);
bank.setAccountBalance(accountBalance);
bank.create();

system("pause>0");
}