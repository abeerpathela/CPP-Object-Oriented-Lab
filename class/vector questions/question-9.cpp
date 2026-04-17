// Given a vector, remove all occurrences of a specific element (e.g., all 3s).
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    int elements;
    cout<<"Enter the number of elements: ";
    cin>>elements;
    for(int i=0; i<elements; i++){
        int input; 
        cout<<"Enter the input number "<<i+1<<": ";
        cin>>input;
        vec.push_back(input);
    }
    int element;
    cout<<"Enter the value you want to remove from the vector: ";
    cin>>element;
    for(auto i=vec.begin(); i!=vec.end();){
        if(*i==element){
            i=vec.erase(i);
        }
        else{
            ++i;
        }
    }
    cout<<endl<<"Vector after removal of element "<<element<<" "<<endl;
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}