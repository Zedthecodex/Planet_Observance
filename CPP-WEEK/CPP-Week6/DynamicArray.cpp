#include <iostream>
using namespace std;

class DynamicArray{
private:
    int size;
    int max;
    int *arrayHolder;
public:
    //constructor
    DynamicArray(){
        this->size=0;
        this->max=5;
        this->arrayHolder=new int[5];
    }
    //destructor
    ~DynamicArray(){
        delete[] this->arrayHolder;
    }
    
    int getSize(){
        return this->size;
    }
    
    int& operator[](int i){
        return this->arrayHolder[i];
    }
    
    void add(int n){
        if(this->max<this->size+1){
            this->max*=2;
            int *tmp=new int[this->max];
            for(size_t i=0;i<this->size;i++){
                tmp[i]=this->arrayHolder[i];
            }
            delete[] this->arrayHolder;
            this->arrayHolder=tmp;
            this->arrayHolder[this->size]=n;
            this->size+=1;
        }else{
            this->arrayHolder[this->size]=n;
            this->size+=1;
        }
    }
    

    
};
