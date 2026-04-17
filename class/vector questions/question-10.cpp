// Find the maximum and minimum element in a vector using STL functions.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec;
    int elements;
    cout<<"Enter the number of elements: ";
    cin>>elements;
    for(int i=0; i<elements; i++){
        int input;
        cout<<"Enter the element number "<<i+1<<": ";
        cin>>input;
        vec.push_back(input);
    }
    cout<<endl<<*max_element(vec.begin(),vec.end());
    cout<<endl<<*min_element(vec.begin(),vec.end());
    
    return 0;
}