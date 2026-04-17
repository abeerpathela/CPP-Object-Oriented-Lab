#include<iostream>
using namespace std;
void openFile(string filename){
    if(filename=="notfound.txt"){
        throw (string) "File not found";
    }
    else{
        throw 1;
    }
}
int main(){
    try{
        openFile("notfund.txt");
    }
    catch(const string e){
        cout<<e<<endl;
    }
    catch(int e){
        cout<<"File opened successfully";
    }
}