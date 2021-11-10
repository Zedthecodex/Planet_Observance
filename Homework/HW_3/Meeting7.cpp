
//Overloading increment and decrement.
// Overloading logical operators. Return by ref,
#include <iostream>
#include <string>
using namespace std;


//Exercise 1 : Create a class Overcoat : 
class Overcoat {
    private : 
        string Type_clothes;
        int size;
        double Price;

    public: 
        Overcoat ():Type_clothes("Unknown"){}
        Overcoat (string Type_clothes,int size,double price):Type_clothes(Type_clothes),size(size),Price(price){}


        bool operator == (Overcoat clothes)
        {
            if (Type_clothes == clothes.Type_clothes)
            {
                cout << "The clothes are of the same type"<< endl;
                return true;
            }
            cout << "They are not of the same type " << endl;
            return false;
        }
        Overcoat operator = (Overcoat &Info)
        {
            Type_clothes = Info.Type_clothes;
            size = Info.size;
            Price = Info.Price;

            return Info;
        }
        // Overcoat operator = (Overcoat Info)
        // {
        //     size = Info.size;
        //     return Info;
        // }
        // Overcoat operator = (Overcoat Info)
        // {
        //     Price = Info.Price;
        //     return Info;
        // }

        bool operator > (Overcoat &Info)
        {
            if (Type_clothes == Info.Type_clothes && Price > Info.Price)
            {
                cout << "The First item is more expensive than the other";
                return true;

            }
            // else if ( Type_clothes != Info.Type_clothes)
            // {
            //     cout << "The type isnt the same ";
            //     return false;

            // }
            else 
            {
                cout << "The First item is cheaper than the second " << endl;
                return false;
            }
        }


        void display ()
        {
            cout << "Type of Clothes : " << this->Type_clothes << endl;
            cout << "Size : " << this-> size << endl;
            cout << "Price : " << this-> Price << endl;

        }
};

int main ()
{
    Overcoat Shirt("Blue shirt",33, 150);
    Overcoat Shirt2("Red shirt",35,200);
    Shirt.display();

    Shirt = Shirt2;

    Shirt.display();

    Shirt > Shirt2;

}