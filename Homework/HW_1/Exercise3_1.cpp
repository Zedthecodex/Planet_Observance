#include <cstring>
#include <iostream>

using namespace std;

class Mystring {

private: 
    
    //Prototpye for stream insertion 
    friend ostream& operator <<(ostream& os, const Mystring& obj);

    //Prototype for stream extraction
    friend istream& operator >>(ostream& is, const Mystring& obj);

    //Prototype for '+'
    //Operator overloading

    friend Mystring operator +(const Mystring& lhs, const Mystring& rhs);
//protected:
   

public:
char *str;
    //No arguements constructor
    Mystring();

    //pop_back() Function
    void pop_bk();

    //Push_back() Function
    void push_bk(char a);

    //To get the length 
    int get_length();

    //Function to copy the string of length len from position pos
    void cpy(char s[], int len, int pos);

    //Swap strings function
    void swp(Mystring& rhs);

    //Constructo with 1 arguments
    Mystring(char* val);

    //Copy constructor
    Mystring(const Mystring& source);

    //Move Constructor
    Mystring(Mystring&& source);

    //overloading the assignment 
    //operator 
    Mystring& operator= (const Mystring& rhs);

    //Destructor
    ~Mystring() {delete str;}


};

//Overloading the plus operator 
Mystring operator + (const Mystring& lhs, const Mystring& rhs)
{
    int length = strlen(lhs.str) + strlen(rhs.str);
    char* buff = new char[ length + 1];

    //Copy the strings to buff[]
    strcpy(buff, lhs.str);
    strcpy(buff,rhs.str);

    //string temp
    Mystring temp {buff};

    //delete the buff[]
    delete [] buff;

    //Return the concatenated string 
    return temp;

}

//Overloading the stream
//Extraction operator 
istream& operator >> (istream& is, Mystring& obj)
{
    char* buff = new char[1000];
    is >> buff;
    obj = Mystring{ buff};
    delete [] buff;
    return is;
}

//Overloading the stream
//Insertion operator
ostream& operator << (ostream& os, Mystring& obj)
{
    os << obj.str;
    return os;

}

//Function for swapping string 
void Mystring ::swp(Mystring& rhs)
{
    Mystring temp { rhs};
    rhs = *this;
    *this = temp;
}

//Function to copy the string 
void Mystring :: cpy (char s[], int len, int pos)
{
    for(int i =0; i < len; i ++ )
    {
        s[i] = str[pos+1];

    }
    s[len] = '\0';
}

//Function to implement push_bk
void Mystring::push_bk(char a)
{

    //Find the length of string
    int length = strlen(str);

    char* buff = new char [length + 2];

    //Copy character from str to buff[]

    for (int i =0; i < length ; i ++ ) 
    {
        buff [i] = str[i];

    }
    buff[length] = a;
    buff[length + 1] = '\0';

    //Assign the new string with char a to string str
    *this = Mystring{buff};

    //Delete the temp buff[]
    delete [] buff;
}

//Function to implement pop_bk
void Mystring:: pop_bk()
{

    int length = strlen(str);
    char* buff = new char[length];
    
    //Copy character from str to buff[]
    for (int i = 0; i < length -1; i ++ )
        buff[i] = str[i];
    buff[length] = '\0';

    //Assign the new string with
    //char a to string str
    *this = Mystring{ buff} ;

    //delete the buff[]
    delete[] buff;
}

// Get_lenght
int Mystring :: get_length()
{
    return strlen(str);

}

//Function to illustrate constructor with no arguement

Mystring::Mystring()
    : str{nullptr}
    {
        str = new char[1];
        str[0] = '\0';

    }

//Constructor with 1 argument
Mystring::Mystring( char* val)
{
    if ( val == nullptr)
    {
         str = new char [1];
         str[0] = '\0';

    }
    else
    {
        str = new char[ strlen ( val) + 1];
        // copy character of val[] using strcpy 
        strcpy(str, val);

    }

}
//Function to illustrate copy constructor 
Mystring::Mystring(const Mystring& source)
{
    str = new char[strlen(source.str) + 1];
    strcpy (str, source.str);

}

//Function to illustrate : Move Constructor
Mystring ::Mystring(Mystring&& source)
{
    str= source.str;
    source.str = nullptr;

}
//Driver code

int main ()
{
    //Constructor with no arguements
    Mystring a;

    //Convert string literal to char array
    char temp[] = "Hello";

    //Constructor with one arguement
    Mystring b{ temp} ;

    //Copy constructor
    Mystring c{ a};

    char temp1[] = "World";

    //One arg construcot called, then move constructor
    Mystring d{Mystring{temp}};

    //Remove last character from Mystring b
    b.pop_bk();

    //Pring string b
    cout << "Mystring b: "<< b << endl;

    //Append last character from Mystring b
    b.push_bk('0');

    //print string b
    cout << "Mystring b: " << b << endl;

    //Print length of string b
    cout << "Length of string b : " << b << endl;

    char arr[80];
    //copy string b chars from length 0 to 3
    b.cpy(arr,3,0);

    //Print sting arr
    cout << "arr is : " << arr << endl;
    
    //swap d and b
    d.swp(b);
    //Concantenate b and b with overloading '+ 'operator
    d = b + b;

    //Print string d 

    cout << "string d :  " << d << endl;

    return 0;

}

