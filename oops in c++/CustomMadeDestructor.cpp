//  Making our destructor

// This destructor gets executed when the code for the object is executed 
// we make destructor to free up the dynamic memory we used in class 


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
    
    ~Student(){ // Destructor 
        cout<<endl<<"Hi , I am a destructor, I delete everything";
        delete cgpaPTR;
    }
    
    void display(){
        cout<<"Name of student: "<<this->name<<endl;
        cout<<"CGPA of student: "<<*cgpaPTR<<endl;
    }
};
int main()
{
    Student s1("Rahul",8.9);
    s1.display();
    return 0;
}