#include<iostream>
using namespace std;
void bookFlight(int seats,int payment){
    if(seats<=0){
        throw 1;
    }
    if(payment<5000){
        throw 1.6;
    }
}
int main(){
    try{
        bookFlight(10,10110);
        cout<<"seat booked Successfully"<<endl;
    }
    catch(const int e){
        cout<<"No seats Available"<<endl;
    }
    catch(const double e){
        cout<<"Payment failed"<<endl;
    }
    return 0;
}