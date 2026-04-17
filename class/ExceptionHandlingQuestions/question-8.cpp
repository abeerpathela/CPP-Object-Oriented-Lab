#include<iostream>
using namespace std;
void registerStudent(int age,string roll){
    if(age<0 || age>150){
        throw 1;
    }
    for(char c: roll){
        if(!isdigit(c)){
            throw (string) "Invalid Roll Number";
        }
    }
}
int main(){
    try{
    string roll;
    int age;
    cout<<"Enter roll  number:";
    cin>>roll;
    cout<<"Enter age :";
    cin>>age;
    registerStudent(age,roll);
    cout<<"Valid registration"<<endl;
    }
    catch(int e){
        cout<<"Invalid Age"<<endl;
    }
    catch(string e){
        cout<<e<<endl;
    }
    return 0;
}