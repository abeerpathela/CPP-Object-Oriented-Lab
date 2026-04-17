#include<iostream>
using namespace std;
int getAttendance(int arr[],int index){
    if(index<0 || index>4){
        throw (string) "Student record not found";
    }
    return arr[index];
};
int main(){
    try{
        int arr[5]={1,4,5,2,1};
        int ch;
        cout<<"Enter a index:";
        cin>>ch;
        cout<<getAttendance(arr,ch);
    }
    catch(const string &e){
        cout<<e;
    }
    return 0;
}