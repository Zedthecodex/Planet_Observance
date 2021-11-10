#include <iostream>

using namespace std;



//Exercise 1: Create a class Fraction with operator overloading

int gcd (int m, int n) {
while (m%n != 0 ) {
    int oldm = m;
    int oldn = n;

    m = oldn;
    n = oldm%oldn;

}
 return n;
}

// class Fraction
// {
    

//     private :
//         int numerator;
//         int denominator;
    
//     public :
    
//     Fraction(int top, int bottom){
//         numerator = top;
//         denominator = bottom;


//     }

//     Fraction operator + (Fraction addi_Frac){

//         int newnumerator = numerator*addi_Frac.denominator + denominator*addi_Frac.numerator;
//         int newdenominator = denominator*addi_Frac.denominator;
//         int common = gcd(newnumerator,newdenominator);

//         return Fraction(newnumerator/common, newdenominator/common);
//     }

//     Fraction operator - (Fraction addi_Frac){
//         int newnumerator = numerator*addi_Frac.denominator - denominator*addi_Frac.numerator;
//         int newdenomiator = denominator*addi_Frac.denominator;
//         int common = gcd(newnumerator,newdenomiator);

//         return Fraction(newnumerator/common, newdenomiator/common);
//     }

//     Fraction operator * (Fraction addi_Frac){
//         int newnumerator = numerator*addi_Frac.numerator;
//         int newdenominator = denominator*addi_Frac.denominator;
//         int common = gcd(newnumerator,newdenominator);

//         return Fraction(newnumerator/common,newdenominator/common);

//     }

//     Fraction operator / (Fraction addi_Frac){
//         int newnumerator = numerator*addi_Frac.denominator;
//         int newdenomiator = denominator*addi_Frac.numerator;
//         int common = gcd(newnumerator,newdenomiator);

        
//         return Fraction(newnumerator/common, newdenomiator/common);
        
//     }

//     bool operator==(Fraction &addi_Frac){
//         int firstnumerator = numerator*addi_Frac.denominator;
//         int secondnumerator = addi_Frac.numerator*addi_Frac.denominator;

//         return firstnumerator==secondnumerator;

//     }
//     void show(){
//         cout << numerator << "/" << denominator << endl;
//     }

//     friend ostream& operator<<(ostream& stream, const Fraction& fraction);

// };

// ostream & operator << (ostream& stream, const Fraction& fraction ){
//     stream<< fraction.numerator << "/" << fraction.denominator;

//     return stream;
// }


// int main () {

//     Fraction f (3,5);
//     Fraction y (3,5);

//     Fraction f3 = f - y;


//     // myfraction.show();
//     //cout << (f == y) ;
//     cout << f3;


//     return 0;
// }


//Exercise 2: Create a Complex class with all working arithemtic operations

class Complex{
    private : 
        int realnum;
        int imagnum;
        double denominator;
        

    
    public: 
        Complex(): realnum(0), imagnum(0){}
        void input()
        {
            cout << "Please Enter the real and imaginary numbers respectively : ";
            cin >> realnum;
            cin >> imagnum;
        }

        Complex operator + (Complex c2)
        {
            Complex temp;
            temp.realnum = realnum + c2.realnum;
            temp.imagnum = imagnum + c2.imagnum;

            return temp;
        }

        Complex operator - (Complex c2)
        {
            Complex temp;
            temp.realnum = realnum - c2.realnum;
            temp.imagnum = imagnum - c2.imagnum;

            return temp;
        }

        Complex operator * (Complex c2)
        {
            Complex temp;
            temp.realnum = realnum*c2.realnum - imagnum*c2.imagnum;
            temp.imagnum = realnum*c2.imagnum + imagnum*c2.realnum;

            return temp;
        }

        Complex operator / (Complex c2) 
        {
    
            Complex temp;

            temp.denominator = (c2.realnum*c2.realnum) + (c2.imagnum*c2.imagnum);
            temp.realnum = realnum*c2.realnum + imagnum*c2.imagnum;
            temp.imagnum = imagnum*c2.realnum - realnum*c2.imagnum;

            // int common1 = gcd(realnumber,denominator);
            // int common2 = gcd(imagnumber,denominator);
            // temp.realnum = realnumber/common1;
            // temp.imagnum = imagnumber/common2;


            return temp;
 
        }
        void Display_fraction()
        {
            if(this->imagnum < 0)
            {
            cout << this->realnum << "/" << this->denominator;
            cout << this->imagnum << "/" << this->denominator << "i";
            }
            else
            {
             cout << this->realnum << "/" << this->denominator << "+";
             cout << this->imagnum << "/" << this->denominator << "i";
            }
        
        }

        void output()
        {
            if ( imagnum < 0)
            {
                cout << "Output Complex Number : " << realnum << imagnum << "i";

            }
            else 
            {
                cout << "Output Complex Number : " << realnum << " + " << imagnum << "i";
            }
        }
};


int main () 
{
    Complex c1,c2, result;

    cout << "Enter the first Complex number : \n";
    c1.input();

    cout << "Enter the Second Complex number : \n";
    c2.input();

    result = c1 / c2;
    // result.output();
    result.Display_fraction();
}