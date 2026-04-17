// Given a vector of integers, print only the even elements.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    int elements;
    cout<<"Enter the element in the vector: ";
    cin>>elements;
    for(int i=0; i<elements; i++){
        int input;
        cout<<"Enter the element number "<<i+1<<": ";
        cin>>input;
        vec.push_back(input);
    }
    cout<<endl<<"Printing all the even elements from the vector:"<<endl;
    for(auto i:vec){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    
    return 0;
}