#include<iostream>
using namespace std;
class Person{
    string name;
    string nationality;
    public:
    void inputPerson(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter nationality:";
        cin>>nationality;
    }
    void displayPerson(){
        cout<<endl<<"Name:"<<name<<endl<<"Nationality"<<nationality<<endl;
    }
};
class Actor: public Person{
    string role;
    int experienceYears;
    public:
    void inputActor(){
        inputPerson();
        cout<<"Enter role(hero/villian):";
        cin>>role;
        cout<<"Enter experienceYears: ";
        cin>>experienceYears;
    }
    void displayActor(){
        displayPerson();
        cout<<"Role:"<<role<<endl<<"Experience Years:"<<experienceYears<<endl;
    }
};
class LeadActor: public Actor{
    int awardCount;
    public:
    void inputLeadActor(){
        inputActor();
        cout<<"Enter awardCount:";
        cin>>awardCount;
    }
    void konsaStar(){
        if(awardCount>5){
            cout<<endl<<"Star Actor"<<endl;
        }
        else{
            cout<<endl<<"Upcoming Talent"<<endl;
        }
    }
    void displayLeadActor(){
        displayActor();
        cout<<"AwardCount:"<<awardCount<<endl;
        konsaStar();
    }
};
int main(){
    LeadActor a[3];
    for(int i=0; i<3; i++){
        a[i].inputLeadActor();
    }
    for(int i=0; i<3; i++){
        a[i].displayLeadActor();
    }
    return 0;
}