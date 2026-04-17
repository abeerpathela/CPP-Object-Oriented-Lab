// default copy constructor in c++

#include <iostream>
#include<string>
using namespace std;
class Teacher{
    private:
    
    string name;
    string dept;
    string subject;
    int salary;
    
    public:
    
    Teacher(string name,int salary,string subject){
        this->name=name;
        this->salary=salary;
        this->subject=subject;
    };
    
    void display(){
        cout<<"Name Of Teacher: "<<this->name<<endl;
        cout<<"Salry of teacher: "<<this->salary<<endl;
        cout<<"Subject taught by teacher: "<<this->subject;
    }
};
int main()
{
    Teacher t1("Shradhha",100000,"C++");
    Teacher t2(t1); // this invokes the default copy constructor of c++
    t2.display();
    // t1.display();
    return 0;
}