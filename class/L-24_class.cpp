// constructors and destructor in inheritence 

#include <iostream>
using namespace std;
class Person{
    string name;int age;
    public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void getDetail(){
        cout<<endl<<name<<endl<<age;
    }
};
class Student:public Person{
    int rollno;
    public:
    Student(string name,int age,int rollno):Person(name,age){
        this->rollno=rollno;
    }
    void getStudent(){
        getDetail();
        cout<<endl<<rollno;
    }
};
int main()
{
    Student a("ABCD",11,1);
    a.getStudent();
    return 0;
}