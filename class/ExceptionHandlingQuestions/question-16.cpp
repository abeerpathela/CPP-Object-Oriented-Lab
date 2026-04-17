#include<iostream>
#include<string>
using namespace std;
void kitchen(string level){
    cout<<"Kitchen: Fire detected! Level = "<<level<<endl;
    throw (string) level;
}
void building(string level){
    try{
        kitchen(level);
    }
    catch(const string errorlevel){
        if(errorlevel=="small"){
            cout<<"Building staff: Fire controlled with extinguisher "<<endl;
        }
        else{
            cout<<"Building staff: Fire too big! Calling Fire Department."<<endl;
            throw;
        }
    }
}
void fireDepartment(string level){
    try{
        building(level);
    }
    catch(const string errorLevel){
        if(errorLevel=="medium"){
            cout<<"Fire Department: Fire handled successfully with hoses."<<endl;
        }
        else{
            cout<<"Fire Department: Fire uncontrollable! Escalating to NDRT."<<endl;
            throw;
        }
    }
}
int main(){
    try{
        fireDepartment("medium");
    }
    catch(const string e){
        cout<<"NDRT: National team deployed! Fire finally under control."<<endl;
    }
    return 0;
}