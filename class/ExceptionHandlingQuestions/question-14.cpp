#include<iostream>
#include<string>
using namespace std;
int main(){
    int Bill;
    cout<<"Bill = ";
    cin>>Bill;
    try{
        if(cin.fail()){
            throw (char) 'x';
        }
        if(Bill<0){
            throw (int) -1;
        }
        if(Bill==0){
            throw (string) "Bill amount cannot be zero";
        }
        cout<<"Payment Successful"<<endl;
    }
    catch(int e){
        cout<<"Exception: Invalid bill amount"<<endl;
    }
    catch(string e){
        cout<<"Exception: "<<e<<endl;
    }
    catch(...){
        cout<<"Unknown payment system error"<<endl;
    }
    return 0;
}