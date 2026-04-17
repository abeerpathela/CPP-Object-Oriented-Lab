// Copy the elements of one vector into another using assignment operator and iterator constructor.

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
    
    vector<int>copy;
    copy=vec;
    cout<<"Printing copied vector: ";
    for(auto i: copy){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>copy2(vec.begin(),vec.end());
    cout<<"Printing second copied vector: ";
    for(auto i: copy2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}