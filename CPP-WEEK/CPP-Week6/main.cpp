

#include <iostream>
#include <vector>
#include "DynamicArray.cpp"
#include "LinkedList.cpp"
// #include "Stack.cpp"
// #include "Queue.cpp"

using namespace std;

int main() {
    //using static array
    int arr[]={1,2,3,4,5};
    
    int arr2[5];
    arr2[0]=1;
    arr2[1]=2;
    arr2[2]=3;
    arr2[3]=4;
    arr2[4]=5;
    
    //using dynamic array
    int *darr=new int[5];
    delete[] darr;
    
    int *darr2=new int[10];
    delete[] darr2;
    
    //vector vector
    vector<int> v1;
    for(int i=1;i<=5;i++){
        v1.push_back(i);
    }
    
    cout<<"Size: "<<v1.size()<<endl;
    v1.resize(4);
    if(v1.empty()==false){
        cout<<"it is not empty"<<endl;
    }else{
        cout<<"is is empty "<<endl;
    }
    
    //using DynamicArray
    DynamicArray darray;
    

    
    for(int i=0;i<=15;i++){
        darray.add(i);
    }
    cout << darray << endl;
}   
//     //Linked Lists
//     LinkedList<int> llist;
    
//     llist.append(10);
//     llist.append(12);
//     llist.append(14);
//     llist.append(16);
//     llist.prepend(5);
//     llist.prepend(4);
//     llist.prepend(3);
//     llist.prepend(2);
//     llist.prepend(1);

//     cout << "Printing Linked List" << endl;

//     while(llist.iterate() != NULL)
//     {
//         cout << llist.ptr() << "\t";
//     }
//     cout << endl;
    
//     //Stack
    
//     Stack<int> stk1;
//     stk1.push(10);
//     stk1.push(12);
//     stk1.push(14);
//     stk1.push(16);
//     stk1.push(5);
//     stk1.push(4);
//     stk1.push(3);
//     stk1.push(2);
//     stk1.push(1);

//     cout << "Printing Stack" << endl;

//     while (stk1.iterate() != NULL)
//     {
//         cout << stk1.ptr() << "\t";
//     }
//     cout << endl;
    
//     //Queue
    
//     Queue<int> squ1;
//     squ1.enqueue(10);
//     squ1.enqueue(12);
//     squ1.enqueue(14);
//     squ1.enqueue(16);
   

//     cout << "Printing Queue" << endl;


    
//     return 0;
// }
