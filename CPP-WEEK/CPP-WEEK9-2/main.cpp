
#include <iostream>
using namespace std;

// double myCalculator (double a, double b) 
// {
//     if (a==b)
//     {
//         cout << "abort" << endl;
//         exit(1);
//     }
//     return 1/(a-b);
// }

// int main () {

//     try {
//         throw "my exception";

//     }catch (const char* e)
//     {
//         cout << "The exception is "<< e << endl;

//     }
//     cout << "new text " << endl;
//     return 0;
// }
double div (double a, double b)
{
    if(b==0)
    {
        throw "Division by zero";

    }
    return (a/b);
}
// int main() 
// {
//     try {
//         long double * arr = new long double [150000000000];

//     }catch (bad_alloc& e)
//     {
//         cout << "Error allocation memory " << e.what() << endl;

//     }
//     cout << "End program"<< endl;
// }
int main ( ) 
{
    double result =0;
    try {
         result = div(10.0,0.0);

    }catch (const char* e)
    {
        cout << "The exception is " << e << endl;
    }
    cout << "End program" << endl;
}