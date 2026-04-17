//  Making our own CUSTOM  deep copy constructor

#include <iostream>
#include<string>
using namespace std;

class Student{
    
    public:
    
    string name;
    double* cgpaPTR;
    
    Student(string name, double cgpa){
        this->name=name;
        cgpaPTR=new double;
        *cgpaPTR=cgpa;
    }
    
    Student(Student &obj){
        this->name=obj.name;
        cgpaPTR=new double;
        *cgpaPTR=*obj.cgpaPTR;
    }
    
    void display(){
        cout<<"Name of student: "<<this->name<<endl;
        cout<<"CGPA of student: "<<*cgpaPTR<<endl;
    }
};
int main()
{
    Student s1("Rahul",8.9);
    Student s2(s1);
    s1.display();
    cout<<endl;
    s2.name="Neha";
    *(s2.cgpaPTR)=9.3;
    s1.display();
    cout<<endl;
    s2.display();
    return 0;
}