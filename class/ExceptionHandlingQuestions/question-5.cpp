#include<iostream>
using namespace std;
void setAge(int age){
    if(age<0||age>150){
        throw (string) "Invalid Age Entered";
    }
    else{
        throw 1;
    }
}
int main(){
    try{
        setAge(188);
    }
    catch(const string e){
        cout<<e<<endl;
    }
    catch(int e){
        cout<<"Valid Age"<<endl;
    }
    return 0;
}