#include "Bank_acc.cpp"
//#include "C:\Users\GOD\project\helloworld\Learn.cpp"
using namespace std;
//Annonymous class
class{
   int value;
   public:
   void setData(int i){
      this->value = i;
   }
   void print(){
      cout<<"Value : "<<this->value<<endl;
   }
}obj1,obj2;

//Nested class
class A {
private:
    int numA;
public: 
    void getData(int n){
        numA=n;
    }
    void printData() {
            cout<<"The number is "<<numA << " "; 
    }
	class B {
        private: 
            int numB; 
        public:
            void getData(int n) {
            numB = n;
        } 
        void printData() {
            cout<<"The number is "<<numB << " "; 
        } 
	}; 
}; 


int main(){

  

    BankAccount bankAccounts[100];

    BankAccount bankaccount1(101,"Dara", 500);
    BankAccount bankaccount2(101,"Dara", 500);

    bankAccounts[0]=bankaccount1;
    bankAccounts[1]=bankaccount2;
    


    obj1.setData(5);
    obj1.print();

    obj2.setData(20);
    obj2.print();

    A objA;
    objA.getData(10);
    objA.printData();

    A::B objB;
    objB.getData(20);
    objB.printData();


    // Student student(101,"Dara", 28);
    // student.displayStudent();

    // Student student2;
    // student2.setId(102);
    // student2.setName("Lina");
    // student2.setAge(-10);
    // student2.displayStudent();
    

    return 0;
}