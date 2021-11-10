
#include <iostream>
#include <string>
#include "Bank.cpp"
#include "Time.cpp"
using namespace std;


int main()
{
//    cout << "Welcome to HPN Bank!\n";
//
//
//    int accountNumber;
//    string accountName;
//    double accountBalance;
//
//    cout << "Enter name "; cin >> accountName;
//    cout << "Enter acc number "; cin >> accountNumber;
//    cout << "Enter amount "; cin >> accountBalance;
//
//    Bank bank(accountNumber, accountName, accountBalance);
////
////    bank.setAccountName(accountName);
////    bank.setAccountNumber(accountNumber);
////    bank.setAccountBalance(accountBalance);
//
//    bank.display();
//
//    Bank bank2(bank);
    
    //Time demo
    Time time1;
    
    Time time2;
    
    
    cin>>time1;
    cin>>time2;

    Time time3=time1+time2;
    
    cout<<time3<<endl;
    

    cin.get();
    
    return 0;
  

}
