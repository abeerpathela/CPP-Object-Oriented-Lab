// Write a program to reverse a vector using reverse() from <algorithm>.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec;
    int elements;
    cout<<"Enter the number of elements in vector: ";
    cin>>elements;
    for(int i=0; i<elements; i++){
        int input;
        cout<<"Enter the input number "<<i+1<<": ";
        cin>>input;
        vec.push_back(input);
    }
    
    reverse(vec.begin(),vec.end());
    for(auto i: vec){
        cout<<i<<" ";
    }
    return 0;
}