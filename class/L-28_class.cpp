#include<iostream>                      // sirf virtual function early bind hote hai 
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"Hello from base"<<endl;
    }
    virtual void enter(){
        cout<<"Enter from base"<<endl;
    }
    void func1(){
        cout<<"THis is func 1 "<<endl;
    }
};
class derived:public base{
    public:
    void enter(){
        cout<<"Enter from derived"<<endl;
    }
    void print(){
        cout<<"Print from derived"<<endl;
    }
};
int main(){
    base *ptr=new base();
    ptr->func1();           // early bind  
    ptr->print();
    return 0;
}