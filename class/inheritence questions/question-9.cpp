#include<iostream>
using namespace std;
class Game{
    string gameName;
    string genre;
    public:
    void inputGame(){
        cout<<"Enter Game Name:";
        cin>>gameName;
        cin.ignore();
        cout<<"Enter Genre:";
        cin>>genre;
    }
    void displayGame(){
        cout<<"GameName: "<<gameName<<endl<<"Genre: "<<genre<<endl;
    }
};
class Tournament: public Game{
    int numTeams;
    string location;
    public:
    void inputTournament(){
        inputGame();
        cout<<"Enter numTeams:";
        cin>>numTeams;
        cout<<"Enter location:";
        cin>>location;
    }
    void displayTournament(){
        displayGame();
        cout<<"Num teams:"<<numTeams<<endl<<"Location:"<<location<<endl;
    }
};
class FinalMatch: public Tournament{
    string winningTeam;
    int prizeMoney;
    public:
    void inputFinalMatch(){
        inputTournament();
        cout<<"Enter winning Team:";
        cin>>winningTeam;
        cout<<"Enter Prize Money:";
        cin>>prizeMoney;
    }
    void categorizeTournament(){
        if(prizeMoney>5000000){
            cout<<endl<<"Major Tournament"<<endl;
        }
        else{
            cout<<endl<<"Minor Tournament"<<endl;
        }
    }
    void displayFinalMatch(){
        displayTournament();
        cout<<"winning Team:"<<winningTeam<<endl<<"Prize Money:"<<prizeMoney<<endl;
        categorizeTournament();
    }
};

int main(){
    FinalMatch a[2];
    for(int i=0; i<2; i++){
        a[i].inputFinalMatch();
    }
    for(int i=0; i<2; i++){
        a[i].displayFinalMatch();
    }
    return 0;
}