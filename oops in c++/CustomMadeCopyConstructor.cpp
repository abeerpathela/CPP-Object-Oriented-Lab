//  Making our own CUSTOM Shallow copy constructor

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
    
    Teacher(string name, int salary, string subject){
        this->name=name;
        this->salary=salary;
        this->subject=subject;
        this->dept="Computer science";
    }
    
    Teacher(Teacher &original_obj){ // Pass by reference  // copy constructor  
        cout<<"I am a copy constructor"<<endl;
        this->name=original_obj.name;
        this->dept=original_obj.dept;
        this->subject=original_obj.subject;
        this->salary=original_obj.salary;
    }
    
    
    void display(){
        cout<<"Name Of Teacher: "<<this->name<<endl;
        cout<<"Salry of teacher: "<<this->salary<<endl;
        cout<<"Subject taught by teacher: "<<this->subject;
    }
};
int main()
{
    Teacher t1("Shradhha",100000,"C++");
    Teacher t2(t1); // this invokes the custom copy constructor wich we have made 
    t2.display();
    // t1.display();
    return 0;
}