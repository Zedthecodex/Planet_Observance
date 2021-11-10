#include <iostream>
using namespace std;
 int main()
 {
 int i, j;
 // Variables used to describe the characteristics of arrays.
 int m1 = 5, m2 = 5;

 int **pArr = new int*[m1];
 for (i = 0; i < m1; i++)
 pArr[i] = new int[m2];
 pArr[3][3] = 150;
 cout << pArr[3][3] << "\n";


 //Sequential deletion of two-dimensional array…

 for (i = 0; i < m1; i++)
 delete[]pArr[i];
 delete[]pArr;
 
 cout << pArr[3][3] << endl;
}

// C++ program to dynamically allocate
// the memory for 2D array in C++
// using new operator