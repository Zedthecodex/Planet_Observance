
#include <iostream>

using namespace std;

class Shape{
public:
    virtual void draw(){
        cout<<"Shape\n";
    };
};

class Circle:public Shape{
public:
    virtual void draw(){
          cout<<"Circle\n";
      }
};

class Triangle:public Shape{
public:
    virtual void draw(){
        cout<<"Triangle\n";
    }
};

class Rectangle:public Shape{
public:
    virtual void draw(){
        cout<<"Rectangle\n";
    }
};

enum{CIRCLE, TRIANGLE, RECTANGLE};

int main() {
    cout<<"Menu"<<endl;
    cout<<"c: Circle"<<endl;
    cout<<"t: Triangle"<<endl;
    cout<<"r: Rectangle"<<endl;
    
    char choice;
    cout<<"Choice a shape: ";
    cin>>choice;
    cin.ignore();
    
//    Circle* c=nullptr;
//    Triangle* t=nullptr;
//    Rectangle* r=nullptr;
    
    Shape* s=nullptr;
    
//    int shape;
    
    switch (choice){
        case 'c':
            s=new Circle();
            //s->draw();
            break;
        case 't':
            s=new Triangle();
            //s->draw();
            break;
        case 'r':
            s=new Rectangle();
            //s->draw();
            break;
    }
    
    s->draw();
    
//    switch(shape){
//        case CIRCLE:
//            c->draw();
//            break;
//        case TRIANGLE:
//            t->draw();
//            break;
//        case RECTANGLE:
//            r->draw();
//            break;
//    }
    
    
    

    return 0;
}
