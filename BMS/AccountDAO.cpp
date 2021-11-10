
#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;

class AccountDAO{
public:
    virtual void write_account()=0;
    virtual void display_sp(int n)=0;
    virtual void modify_account(int n)=0;
    virtual void delete_account(int n)=0;
    virtual void display_all()=0;
};
