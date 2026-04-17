#include<iostream>
using namespace std;
class Spacecraft{
    string name;
    string fueltype;
    public:
    void inputSpacecraft(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter fuelType: ";
        cin>>fueltype;
    }
    void displaySpacecraft(){
        cout<<endl<<"Name:"<<name<<endl<<"fuelType: "<<fueltype<<endl;
    }
};
class MannedCraft : public Spacecraft{
    int crewSize;
    public:
    void inputMannedCraft(){
        inputSpacecraft();
        cout<<"Enter crewSize:";
        cin>>crewSize;
    }
    void displayMannedCraft(){
        displaySpacecraft();
        cout<<"crewSize: "<<crewSize<<endl;
    }
};
class Mission: public MannedCraft{
    string missionName;
    int durationDays;
    public:
    void inputMission(){
        inputMannedCraft();
        cout<<"Enter Mission Name: ";
        cin>>missionName;
        cout<<"Enter duration days: ";
        cin>>durationDays;
    }
    void displayMission(){
        displayMannedCraft();
        cout<<"Mission Name: "<<missionName<<endl<<"Duration Days: "<<durationDays<<endl;
        checkDuration();
    }
    void checkDuration(){
        if(durationDays>365){
            cout<<endl<<"Long Term"<<endl;
        }
        else{
            cout<<endl<<"Short Term"<<endl;
        }
    }
};
int main(){
    Mission a;
    a.inputMission();
    a.displayMission();
    return 0;
}