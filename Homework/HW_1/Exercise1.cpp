#include <iostream>

using namespace std;


int gcd (int m, int n) {
while (m%n != 0 ) {
    int oldm = m;
    int oldn = n;

    m = oldn;
    n = oldm%oldn;

}
 return n;
}

class Fraction
{
    

    private :
        int numerator;
        int denominator;
    
    public :
    
    Fraction(int top, int bottom){
        numerator = top;
        denominator = bottom;


    }

    Fraction operator + (Fraction addi_Frac){

        int newnumerator = numerator*addi_Frac.denominator + denominator*addi_Frac.numerator;
        int newdenominator = denominator*addi_Frac.denominator;
        int common = gcd(newnumerator,newdenominator);

        return Fraction(newnumerator/common, newdenominator/common);
    }

    Fraction operator - (Fraction addi_Frac){
        int newnumerator = numerator*addi_Frac.denominator - denominator*addi_Frac.numerator;
        int newdenomiator = denominator*addi_Frac.denominator;
        int common = gcd(newnumerator,newdenomiator);

        return Fraction(newnumerator/common, newdenomiator/common);
    }

    Fraction operator * (Fraction addi_Frac){
        int newnumerator = numerator*addi_Frac.numerator;
        int newdenominator = denominator*addi_Frac.denominator;
        int common = gcd(newnumerator,newdenominator);

        return Fraction(newnumerator/common,newdenominator/common);

    }

    Fraction operator / (Fraction addi_Frac){
        int newnumerator = numerator*addi_Frac.denominator;
        int newdenomiator = denominator*addi_Frac.numerator;
        int common = gcd(newnumerator,newdenomiator);

        
        return Fraction(newnumerator/common, newdenomiator/common);
        
    }

    bool operator==(Fraction &addi_Frac){
        int firstnumerator = numerator*addi_Frac.denominator;
        int secondnumerator = addi_Frac.numerator*addi_Frac.denominator;

        return firstnumerator==secondnumerator;

    }


    void show(){
        cout << numerator << "/" << denominator << endl;
    }

    friend ostream& operator<<(ostream& stream, const Fraction& fraction);

};

ostream & operator << (ostream& stream, const Fraction& fraction ){
    stream<< fraction.numerator << "/" << fraction.denominator;

    return stream;
}


int main () {

    Fraction f (3,5);
    Fraction y (3,5);

    Fraction f3 = f - y;


    // myfraction.show();
    //cout << (f == y) ;
    cout << f3;


    return 0;
}