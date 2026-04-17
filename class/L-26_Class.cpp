//  virtual function ,late binding, early binding 
#include<iostream>            //  virtual function ,late binding, early binding are important terms and we must know these concepts 
#include<string>
using namespace std;

class Computer{
    string ram;
    string cpu;
public:
    virtual void coding(){   // virtual function
        cout << "Computer coding" << endl;
    }
};

class Laptop:public Computer{
public:
    void coding() override {
        cout << "Laptop coding" << endl;
    }
};

class Desktop:public Computer{
public:
    void coding() override {
        cout << "Desktop coding" << endl;
    }
};

class Mobile:public Computer{
public:
    void coding() override {
        cout << "Mobile coding" << endl;
    }
};

// Programmer function (decides which device to use for coding)
void programer(Computer* ptr, string pro){
    cout << "Programmer is coding on: " << pro << endl;
    ptr->coding();   // virtual function => late binding
}

int main(){
    Laptop l;
    Desktop d;
    Mobile m;

    // using programmer function
    programer(&l, "Laptop");
    programer(&d, "Desktop");
    programer(&m, "Mobile");

    return 0;
}
