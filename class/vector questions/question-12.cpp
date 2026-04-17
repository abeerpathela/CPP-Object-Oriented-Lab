// Count the frequency of each element in a vector.

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
    vector<int>visited;
    for(auto i: vec){
        bool isvisited=false;
        for(auto p:visited){
            if(i==p){
                isvisited=true;
                break;
            }
        }
        if(isvisited==false){
            int count=0;
            for(auto j: vec){
                if(i==j){
                    count++;
                }
            }
            visited.push_back(i);
            cout<<"element "<<i<<" frequency is "<<count<<endl;
        }
    }
    return 0;
}