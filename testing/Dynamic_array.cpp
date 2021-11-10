#include<iostream>
using namespace std;

// class Dynarray{
//     private : 
//         int *pa;
//         int length;
//         int nextindex;
//     public:
//         Dynarray();
//         ~Dynarray();
//         int& operator[] (int index); // thje indexing operation
//         void add(int val);
//         int size();


// };

// Dynarray:: Dynarray() {
//      pa = new int[10];
//      for (int i = 0; i < 10 ; i++)
//         pa[i] = 0;
//     length = 10;
//     nextindex = 0;

// }

// Dynarray::~Dynarray(){
//     delete [] pa;
// }

// int& Dynarray::operator[] (int index) {
//     int *pnewa;                                 //Pointer for the new array
//     if(index >= length){                        //is element in the array?
//         pnewa = new int[index + 10];            //Allocate a bigger array
//         for ( int i = 0; i < nextindex; i++ ) // copy old values
//             pnewa[i] = pa[i];
//         for (int j = nextindex; j < index + 10; j++ ) // initialize remainder
//             pnewa [j] = 0;
//         length = index + 10;  // Set length to bigger size
//         delete [] pa;           //delete the old array
//         pa = pnewa;             //reassign the new array

//     }
//     if ( index > nextindex) //Set nextIndex past index
//         nextindex = index + 1;
//     return * (pa + index);          //a reference to the element

// }




// void Dynarray::add(int val) {
//     int *pnewa;
//     if (nextindex == length){
//         length = length + 10;
//         pnewa = new int [length];
//         for (int i =0; i < nextindex; i ++ )
//             pnewa [i] = pa[i];
//         for (int j = nextindex; j < length; j ++ )
//             pnewa [j] = 0;
//         delete [] pa;
//         pa = pnewa;
    
//     }   
//     pa[nextindex++] = val;

// }

// int Dynarray::size(){
//     return length;
// }

// int main() {
//     Dynarray da;                                        //Create an array object, size 10
//     da.add(1);                                        //add values to the end
//     da.add(2);                                         
//     da.add(3);
//     da[3] = 4;                                        //Use LHV for assignment
//     for (int i = 0; i < da.size(); i++){                //get length of array uysing size()
//         cout << da[i] << endl;                         //Print out using RHV
//     da[12] = 20;                                         ///assign element past end of array
//     }
//     for (int j =0; j < da.size() ; j ++ )               //size is now 22
//         cout << da[j] << endl;                          //print out all elements again in
//     return 0;                                           //bigger array
// }

template <class T>
class Dynarray
{
    private:
        T *pa;
        int length;
        int nextindex;
    public:
        Dynarray();
        ~Dynarray();
        T& operator [] (int index);
        void add(int val);
        void add(string val);
        int size();
};

template <class T>
Dynarray<T> :: Dynarray() {
    pa = new T[10];
    for (int i = 0; i < 10; i ++ )
        pa[i] = "Unkown";
    length = 10;
    nextindex  =0;

}
template <class T>
Dynarray<T> :: ~ Dynarray(){
    delete [] pa;
}

template <class T>
T& Dynarray<T> :: operator[](int index) 
{
    T *pnewa;
    if( index >= length) {
        pnewa = new T[index + 10];
        for (int i =0; i <nextindex; i++)
            pnewa[i] = pa[i];
        for(int j = nextindex; j < index + 10; j++)
            pnewa[j] = "Unkown";
        length = index + 10;
        delete [] pa;
        pa = pnewa;

    }
if(index > nextindex)
    nextindex = index + 1;
return * (pa +index);

}

template <class T> 
void Dynarray<T> :: add(int val) {
    T * pnewa;
    if (nextindex == length){
        length = length + 10;
        pnewa = new T[length];
        for(int i = 0; i < nextindex ; i ++ )
            pnewa [i] = pa[i];
        for (int j = nextindex; j < length; j++ )
            pnewa[j] = 0;
        delete [] pa;
        pa = pnewa; 
    }
    pa [nextindex++] = val;

}
template <class T> 
void Dynarray<T> :: add(string val) {
    T * pnewa;
    if (nextindex == length){
        length = length + 10;
        pnewa = new T[length];
        for(int i = 0; i < nextindex ; i ++ )
            pnewa [i] = pa[i];
        for (int j = nextindex; j < length; j++ )
            pnewa[j] = "0";
        delete [] pa;
        pa = pnewa; 
    }
    pa [nextindex++] = val;

}

template<class T>
int Dynarray <T>::size()
{
    return length;
}

int main() {
    Dynarray<string> da;                                        //Create an array object, size 10
    da.add("1.52");                                        //add values to the end
    // da.add(2);                                         
    // da.add(3);
    da[5] = "Friends";                                        //Use LHV for assignment
    for (int i = 0; i < da.size(); i++){                //get length of array uysing size()
        cout << da[i] << endl;                         //Print out using RHV
    da[10] = "Yeet";                                         ///assign element past end of array
    }
    for (int j =0; j < da.size() ; j ++ )               //size is now 22
        cout << da[j] << endl;                          //print out all elements again in
    return 0;                                           //bigger array
}