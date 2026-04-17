#include<iostream>
using namespace std;
void calculateFee(int daysLate){
    if(daysLate<0){
        throw (int) 1;
    }
    if(daysLate>30){
        throw (double) 1.6;
    }
    if(daysLate%2!=0){
        throw (char) 'a';
    }
}
int main(){
    try{
        int daysLate;
        cout<<"Enter daysLate:";
        cin>>daysLate;
        calculateFee(daysLate);
    }
    catch(int e){
        cout<<"Days cannot be negitive";
    }
    catch(double e){
        cout<<"Maximum days exceeded";
    }
    catch(char e){
        cout<<"Days should be even for special discount";
    }
    return 0;
}