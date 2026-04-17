// Sort a vector in ascending and descending order using sort().

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
    
    sort(vec.begin(),vec.end());
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end(),greater<int>());
    for(auto i: vec){
        cout<<i<<" ";
    }
    return 0;
}