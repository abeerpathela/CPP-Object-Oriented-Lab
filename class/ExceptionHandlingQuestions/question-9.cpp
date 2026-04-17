#include<iostream>
using namespace std;
void validateScore(int score){
    if(score<0){
        throw 1;
    }
    if(score>100){
        throw (float) 1.6;
    }
    if(score%5!=0){
        throw (char) 'a';
    }
}
int main(){
    try{
        int score;
        cout<<"Input score:";
        cin>>score;
        validateScore(score);
    }
    catch(int e){
        cout<<"Score cannot be negitive"<<endl;
    }
    catch(float e){
        cout<<"Score cannot exceed 100"<<endl;
    }
    catch(char e){
        cout<<"Score must be multiple of 5"<<endl;
    }
    return 0;
}