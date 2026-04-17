// Basic Inheritance

#include<iostream>
#include<string>
using namespace std;

class person{
    
    public:
    
    string name;
    int age;

    person(){
        cout<<"This is a parent constructor.";
    }
    
};

class student : public person{
    
    public:
    
    int rollno;
    
    
    void display(){
        cout<<endl<<"Name of student: "<<name;
        cout<<endl<<"Age of student: "<<age;
        cout<<endl<<"Roll no of student: "<<rollno;
    }
    
};

int main(){
    student s1;
    
    s1.name="Abeer Pathela";
    s1.age=19;
    s1.rollno=14;
    
    s1.display();
    return 0;
}