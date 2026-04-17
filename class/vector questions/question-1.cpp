// Create a vector of integers and take 5 inputs from the user, then print the vector elements.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>vec;
    int inp;
    cout<<"Number of inputs you want to enter:";
    cin>>inp;
    for(int i=0; i<inp; i++){
        int input;
        cout<<"Enter input number "<<i+1<<": ";
        cin>>input;
        vec.push_back(input);
    }
    cout<<endl<<"final vector:"<<endl;
    for(auto i: vec){
        cout<<i<<" ";
    }
    return 0;
}