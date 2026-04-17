#include<iostream>
using namespace std;
void validateMarks(int marks){
    if(marks<0){
        throw (string) "Marks cannot be negitive";
    }
    if(marks>100){
        throw (string) "Marks cannot be more than 100!";
    }
}
void processMarks(int marks){
    try{
        validateMarks(marks);

    }
    catch(const string e){
        cout<<"Log: "<<e<<endl;
        throw;
    }
}
int main(){
    try{
        processMarks(1024);
    }
    catch(const string e){
        cout<<"Final error message: "<<e<<endl;
    }
    return 0;
}