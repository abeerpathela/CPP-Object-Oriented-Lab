#include<iostream>
using namespace std;
int main(){
    int itemCount;
    int totalAmount;
    cout<<"Enter itemCount: ";
    cin>>itemCount;
    cout<<"Enter totalAmount: ";
    cin>>totalAmount;
    try{
        if(itemCount<=0){
            throw (int) 1;
        }
        if(totalAmount<=0){
            throw (double) 1.6;
        }
    }
    catch(...){
        cout<<"Cart Error"<<endl;
    }
    return 0;
}