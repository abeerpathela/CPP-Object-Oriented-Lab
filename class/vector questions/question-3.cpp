// Write a program to find the sum of all elements in a vector.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    int elements;
    cout<<"Enter the number of elements in the vector: ";
    cin>>elements;
    for(int i=0; i<elements; i++){
        int input;
        cout<<"Enter the element number "<<i+1<<": ";
        cin>>input;
        vec.push_back(input);
    }
    int sum=0;
    for(auto i: vec){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}