// Access the first and last elements of a vector using front() and back().

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    int elements;
    cout<<"Enter the number of elements to be entered in the vector: ";
    cin>>elements;
    for(int i=0; i<elements; i++){
        int input;
        cout<<"Enter the input number "<<i+1<<": ";
        cin>>input;
        vec.push_back(input);
    }
    cout<<"First element of the vector: "<<vec.front()<<endl;
    cout<<"Last element of the vector: "<<vec.back()<<endl;
    return 0;
}