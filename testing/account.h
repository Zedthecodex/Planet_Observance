

#ifndef CPP_BANKING_SYSTEM_ACCOUNT_H
#define CPP_BANKING_SYSTEM_ACCOUNT_H


#include <vector>
#include <string> 


using namespace std;


class Account {
    private: 
        static long cumalative_acc_number;
        long acc_number;
        mutable string first_name;
        mutable string last_name;
        mutable long acct_amt;
    public:
        static vector<Account *> v_list;
        
        Account(string first_name, string last_name, const long &acc_amt);
        Account(const long &account_num, string first_name, string last_name, const long &acct_amt);
        
        Account() : Account(getAccountNumber()," ","", 0L) {};

        Account(const Account &a);

        void setFirstName(const string &fn) const;

        void setLastName(const string &ln) const;

        void setAccountAmount(const long &account_amt) const;

        const long &getAccountNumber() const;

        const string &getFirstName() const;

        const string &getLastName() const;

        const long  &getAccountAmount() const;

        static long getLastAccountNumber(); // Retrieve account info and ghet the latest account number

        static vector<Account *> getAll();


        friend const ifstream &operator>> (ifstream &ifs, vector<Account *> &v_list);

        friend ostream &operator <<(ostream &out, const Account &a);

        friend const ofstream &operator<< ( ofstream & ofs, const Account &a);


        static void open();

        static bool compareAccountNumber(const Account *acct_ptr, const long &acc_number){
            return (*acct_ptr).getAccountNumber() == acc_number;

        }

        static Account *searchByAccountNumber(const long &acc_number);

        static void balance();

        static void ledgerDump();

        static void deposit();

        static void withdraw();

        static void close();

        static void showAll();   


        ~Account();

};

#endif //CPP_BANKING_SYSTEM_ACCOUNT_H