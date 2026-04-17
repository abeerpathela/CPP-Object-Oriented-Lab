#include<iostream>
#include<string>
using namespace std;
class Person{
    string name;
    int age;
    public:
    void inputPerson(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }
    void displayPerson(){
        cout<<endl<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
    }
};
class Student: public Person{
    int rollNo;
    string course;
    public:
    void inputStudent(){
        inputPerson();
        cout<<"Enter rollNo:";
        cin>>rollNo;
        cout<<"Enter course:";
        cin>>course;
    }
    void displayStudent(){
        displayPerson();
        cout<<"RollNo."<<rollNo<<endl<<"Course:"<<course<<endl;
    }
};
class Teacher: public Person{
    double employeeID;
    string subject;
    public:
    void inputTeacher(){
        inputPerson();
        cout<<"Enter EmployeeID:";
        cin>>employeeID;
        cout<<"Enter subject:";
        cin>>subject;
    }
    void check(){
        if(subject=="c++" || subject=="C++"){
            cout<<endl<<"Teaches Programming"<<endl;
        }
    }
    void displayTeacher(){
        displayPerson();
        cout<<"EmployeeID:"<<employeeID<<endl<<"Subject:"<<subject<<endl;
        check();
    }
};
class Staff: public Person{
    double staffID;
    string department;
    public:
    void inputStaff(){
        inputPerson();
        cout<<"Enter staffID:";
        cin>>staffID;
        cout<<"Enter department:";
        cin>>department;
    }
    void displayStaff(){
        displayPerson();
        cout<<"StaffID:"<<staffID<<endl<<"Department:"<<department<<endl;
    }
};
int main(){
    Student a;
    a.inputStudent();
    Teacher b;
    b.inputTeacher();
    Staff c;
    c.inputStaff();
    a.displayStudent();
    b.displayTeacher();
    c.displayStaff();
    return 0;
}