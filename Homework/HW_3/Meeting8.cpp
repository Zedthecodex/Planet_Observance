#include <iostream>
#include <vector>
#include <string>

using namespace std;


//Exercise 1 : Add a move constructor to an existing class String

// class Person
// {
//     private : 
//         string* name;

//     public :
//     //Constructor
//         Person(string n)
//         {
//             name = new string;
//             *name = n;

//             cout << "Constructor is called for " << n << endl;
//         }
    
//     // Copy Constructor
//         Person(const Person& source):Person{ *source.name}
//         {
//             cout << "Copy constructor is called -" 
//                 <<  "Deep copy for"
//                 << *source.name << endl;

//         }
//     //Move Constructor 
//         Person(Person&& source) : name {source.name}
//         {
//             cout << "Move constructor for " << *source.name << endl;
//             source.name = nullptr; 
//         }
//         ~Person()
//         {
//             if (name != nullptr)
//                 cout << "Destructor is called for " << *name << endl;
//             else 
//                 cout << "Destructor is called for nullptr" << endl;

//                 delete name;    
//         }


// };
// int main()
// {
//     vector<Person> vec;

//     vec.push_back(Person{"Zed"} );
//     vec.push_back(Person{"Siddh"});
//     return 0;

// }

//Exercise 2 : Set a move constructor for a class Array

// template<unsigned int N>
// class Foo {
//     private:
//     int _nums[N];
//     string grocery;

// public:
//     Foo() {
//         for (int i = 0; i < N; ++i) _nums[i] = 0;
//     }

//     Foo(const Foo<N>& other) {
//         for (int i = 0; i < N; ++i) _nums[i] = other._nums[i];
//     }

//     Foo(Foo<N>&& other) {
//         // ??? How can we take advantage of move constructors here?
//     }

//     // ... other methods and members

//     virtual ~Foo() { /* no action required */ }


// };
// Foo<5> bar() {
//     Foo<5> result;
//     // Do stuff with 'result'
//     return result;
// }

// int main() {
//     Foo<5> foo(bar());
//     // ...
//     return 0;
// }
class Data
{
    int a, b, c;
    int* array;
public:
    Data() : a(), b(), c()
    {
        array = new int[200];       // this object allocates and owns this buffer
    } 
    
    Data(const Data& d) :
        a(d.a), 
        b(d.b),
        c(d.c)
    {
        array = new int[200];                   // this object allocates and owns this buffer
        std::copy(d.array, d.array+200, array); // <- copy data for that buffer from 'd's buffer
    } 
    Data(Data&& d) : 
        a(std::move(d.a)),      // the std::moves here aren't really necessary because they are basic types.
        b(std::move(d.b)),      //  but whatever.
        c(std::move(d.c))
    {
        array = d.array;        // we are not allocating an buffer, but are merely taking ownership of 'd's buffer
        d.array = nullptr;      // <- have 'd' release it so that it no longer owns it.
    } 
    
    // destructor
    ~Data()
    {
        // delete whatever array we own
        delete[] array;
    }
    
    // copy assignment
    Data& operator = (const Data& d)
    {
        // no need to reallocate, because this object already owns a buffer.  Simply copy
        //   the data over
        a = d.a;
        b = d.b;
        c = d.c;
        std::copy(d.array, d.array+200, array);
        
        return *this;
    }
    
    // move assignment
    Data& operator = (Data&& d)
    {
        // no need to reallocate -- or even to copy.  We just want to move ownership of d's buffer
        //   to this object.
        a = d.a;
        b = d.b;
        c = d.c;
        
        delete[] array;     // unallocate the buffer we currently own
        array = d.array;    // take ownership of d's buffer
        d.array = nullptr;  // have d release ownership of the buffer
        
        return *this;
    }
};

int main()
{
    Data();

}