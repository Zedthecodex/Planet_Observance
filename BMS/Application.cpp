#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include "AccountService.cpp"
using namespace std;

class Application{
private:
    void intro()
    {
        cout<<"\n\n\n\t  BANK";
        cout<<"\n\n\tMANAGEMENT";
        cout<<"\n\n\t  SYSTEM";
        cout<<"\n\n\n\nMADE BY : your name";
        cout<<"\n\nSCHOOL : your school name";
        cin.get();
    }
public:
    void run(){
        AccountService accountService;
        char ch;
        int num;
        intro();
        do
        {
            system("cls");
            cout<<"\n\n\n\tMAIN MENU";
            cout<<"\n\n\t01. NEW ACCOUNT";
            cout<<"\n\n\t02. DEPOSIT AMOUNT";
            cout<<"\n\n\t03. WITHDRAW AMOUNT";
            cout<<"\n\n\t04. BALANCE ENQUIRY";
            cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
            cout<<"\n\n\t06. CLOSE AN ACCOUNT";
            cout<<"\n\n\t07. MODIFY AN ACCOUNT";
            cout<<"\n\n\t08. EXIT";
            cout<<"\n\n\tSelect Your Option (1-8) ";
            cin>>ch;
            system("cls");
            switch(ch)
            {
            case '1':
                    accountService.write_account();
                break;
            case '2':
                cout<<"\n\n\tEnter The account No. : "; cin>>num;
                accountService.deposit_withdraw(num, 1);
                break;
            case '3':
                cout<<"\n\n\tEnter The account No. : "; cin>>num;
                accountService.deposit_withdraw(num, 2);
                break;
            case '4':
                cout<<"\n\n\tEnter The account No. : "; cin>>num;
                accountService.display_sp(num);
                break;
            case '5':
                accountService.display_all();
                break;
            case '6':
                cout<<"\n\n\tEnter The account No. : "; cin>>num;
                accountService.delete_account(num);
                break;
             case '7':
                cout<<"\n\n\tEnter The account No. : "; cin>>num;
                accountService.modify_account(num);
                break;
             case '8':
                cout<<"\n\n\tThanks for using bank managemnt system";
                break;
             default :cout<<"\a";
            }
            cin.ignore();
            cin.get();
        }while(ch!='8');
    }
};
