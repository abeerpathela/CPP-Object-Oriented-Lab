#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    try{
        if(marks<0){
            throw (int) 1;
        }
        if(marks>100){
            throw (double) 1.6;
        }
    }
    catch(...){
        cout<<"Invalid Marks Input"<<endl;
    }
    return 0;
}