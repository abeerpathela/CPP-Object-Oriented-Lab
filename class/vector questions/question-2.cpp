// Initialize a vector with 10 elements, all having value 5. Print its size and elements.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(10,5);
    cout<<endl<<vec.size()<<endl;
    for(auto i: vec){
        cout<<i<<endl;
    }
    return 0;
}