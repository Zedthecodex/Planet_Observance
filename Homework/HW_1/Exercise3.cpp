#include<iostream> 
#include <cstring>



using namespace std;

class Mystring{

    private:
        //Initialize the char array
        char *str;

    public:
        //No argument Constructor
        Mystring();

        //Constructor with 1 Arguement
        Mystring(char* val);

        //Copy Constructor
        Mystring(const Mystring& source);

        //Move Constructor
        Mystring(Mystring&& source);

        //Destructor
        ~Mystring(){ delete str;}

};

//Function to illustrate Constructor
//with no Arguements
Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    str[0] = '\0';

}

//Function to illustrate Consturctor
//With one arguments
Mystring::Mystring(char* val)
{
    if (val ==nullptr)
    {
        str = new char [1];
        str[0] = '\0';
    
    }
    else
    {
        str = new char[strlen(val) + 1];

        //copy character of val[]
        //using strcpy
        strcpy(str,val);

        cout << "The string passed is: " 
            << str << endl;

    }
}

//Function to illustrate
//Copy Constructor
Mystring::Mystring(const Mystring& source)
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);

}

//Move Constructor
Mystring::Mystring(Mystring&& source)
{
    str = source.str;
    source.str = nullptr;

}
//Driver code
int main()
{
    // Constructor with no arguements
    Mystring a;
    
    //Convert string literal to char array
    char temp[] = "Hello";

    //Constructo with one arguement
    Mystring b{ temp};

    //Copy Constructor
    Mystring c {a};

    char temp1[] = "World";
    
    //One arg Constructor called, then the move constructor
    Mystring d{ Mystring{temp}};
    return 0;
}