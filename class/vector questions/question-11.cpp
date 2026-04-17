// Given two sorted vectors, merge them into a single sorted vector.
#include<iostream>
#include<vector>
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
    vector<int>vec_2;
    int elements_2;
    cout<<"Enter the number of elements: ";
    cin>>elements_2;
    for(int i=0; i<elements_2; i++){
        int input;
        cout<<"Enter the element number "<<i+1<<": ";
        cin>>input;
        vec_2.push_back(input);
    }
    vector<int>vec_3;
    vector<int>::iterator i;
    for(i=vec.begin(); i!=vec.end(); i++){
        vec_3.push_back(*i);
    }
    vector<int>::iterator j;
    for(j=vec_2.begin(); j!=vec_2.end(); j++){
        vec_3.push_back(*j);
    }
    cout<<endl<<"Printing the final vector formed: "<<endl;
    for(auto p: vec_3){
        cout<<p<<" ";
    }
    cout<<endl;
    return 0;
}