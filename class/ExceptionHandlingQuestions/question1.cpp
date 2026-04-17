#include<iostream>
#include<string>
using namespace std;
void divide(int a,int b){
    if(b==0){
        throw (string) "Division by Zero not allowed";
    }
    else{
    int div;
    div=a/b;
    cout<<div<<endl;
    }
};
int main(){
    try{
    int a,b;
    cout<<"Enter value for a=";
    cin>>a;
    cout<<"Enter the value of b=";
    cin>>b;
    divide(a,b);
    }
    catch(const string &e){
        cout<<e;
    }
    return 0;
}