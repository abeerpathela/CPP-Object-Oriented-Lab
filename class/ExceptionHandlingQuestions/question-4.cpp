#include<iostream>
using namespace std;
void withdraw(int amount,int &balance){
    if(amount>balance){
        throw (string) "Insufficent Balance";
    }
    else{
        balance=balance-amount;
    }
};
int main(){
    try{
        int balance=2000;
        withdraw(20,balance);
    }
    catch(const string e){
        cout<<e<<endl;
    }
    return 0;
}