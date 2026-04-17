#include<iostream>
using namespace std;
void bookRoom(int rooms,int payment){
    if(rooms<=0){
        throw (int) 1;
    }
    if(payment<0){
        throw (double) 1.8;
    }
    if(rooms>10){
        throw (string) "Booking limit exceedeed";
    }
}
int main(){
    try{
        int rooms;
        int payment;
        cout<<"Enter number of rooms";
        cin>>rooms;
        cout<<"Enter payment:";
        cin>>payment;
        bookRoom(rooms,payment);
        cout<<"Room booked successfully"<<endl;
    }
    catch(int e){
        cout<<"Invalid number of rooms"<<endl;
    }
    catch(double e){
        cout<<"Payment cannot be negitive"<<endl;
    }
    catch(string e){
        cout<<"Booking limit exceeded"<<endl;
    }
    return 0;
}