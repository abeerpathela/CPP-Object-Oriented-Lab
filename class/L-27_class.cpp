#include<iostream>
#include<string>
using namespace std;
class computer{
    public:
    virtual void coding(){
        cout<<"This is computer coding"<<endl;
    }
};
class laptop: public computer{
    public:
    void coding(){
        cout<<"This is laptop coding"<<endl;
    }
};
class mobile: public computer{
    public:
    void coding(){
        cout<<"This is mobile coding"<<endl;
    }
};
class desktop: public computer{
    public:
    void coding(){
        cout<<"This is desktop coding"<<endl;
    }
};
class programmer{
    string name;
    public:
    programmer(string name){
        this->name=name;
    }
    void program(computer *a){
        a->coding();
    }
};
int main(){
    programmer a("ABCD");
    laptop b;
    desktop c;
    mobile d;
    a.program(&c);
    return 0;
}