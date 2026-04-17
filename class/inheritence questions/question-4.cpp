#include<iostream>
using namespace std;
class Workout{
    string type;
    int duration;
    public:
    void inputWorkout(){
        cout<<"Enter type:";
        cin>>type;
        cout<<"Enter duratrion";
        cin>>duration;
    }
    void displayWorkout(){
        cout<<"Type:"<<type<<endl<<"Duration:"<<duration<<endl;
    }
    int getDuration(){
        return duration;
    }
};
class PersonalTrainerWorkout: public Workout{
    string trainerName;
    int fee;
    public:
    void inputTrainerWorkout(){
        inputWorkout();
        cout<<"Enter Trainer Name:";
        cin>>trainerName;
        cout<<"Enter fee:";
        cin>>fee;
    }
    void displayTrainerWorkout(){
        displayWorkout();
        cout<<"Trainer: "<<trainerName<<endl;
        cout<<"fee: "<<fee<<endl;
        cout<<"Cost Per minute: "<<costPerMinute()<<endl;
    }
    float costPerMinute(){
        return fee/getDuration();
    }
};
int main(){
    PersonalTrainerWorkout a;
    PersonalTrainerWorkout b;
    PersonalTrainerWorkout c;
    a.inputTrainerWorkout();
    b.inputTrainerWorkout();
    c.inputTrainerWorkout();
    a.displayTrainerWorkout();
    b.displayTrainerWorkout();
    c.displayTrainerWorkout();
    return 0;
}