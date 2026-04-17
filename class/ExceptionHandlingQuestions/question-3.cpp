#include<iostream>
#include<string>
using namespace std;
int setRollNumber(string roll){
    bool isValid=true;
    for(int i=0; roll[i]!='\0';i++){
        if(roll[i]>='0' && roll[i]<='9'){
            continue;
        }
        else{
            isValid=false;
        }
    }
    if(isValid==false){
        throw (string) "Invalid roll number";
    }
    else{
        return stoi(roll);
    }
};
int main(){
    try{
        string rollNumber="1234ll";
        cout<<setRollNumber(rollNumber);
    }
    catch(const string e){
        cout<<e;
    }
    return 0;
}