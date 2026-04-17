#include<iostream>
using namespace std;
class BlogPost{
    string title;
    int wordCount;
    public:
    void inputPost(){
        cout<<"Enter title:";
        cin>>title;
        cout<<"Enter wordCount:";
        cin>>wordCount;
    }
    void displayPost(){
        cout<<"Title: "<<title<<endl<<"wordCount: "<<wordCount<<endl;
    }
    string getTitle(){
        return title;
    }
    int getWordCount(){
        return wordCount;
    }
};
class TravelPost: public BlogPost{
    string destination;
    double budgetEstimate;
    public:
    void inputTravelPost(){
        inputPost();
        cout<<"Enter destination: ";
        cin>>destination;
        cout<<"Enter budgetEstimate: ";
        cin>>budgetEstimate;
    }
    void displayTravelPost(){
        cout<<endl<<"Title: "<<getTitle()<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"WordCount: "<<getWordCount()<<endl;
        cout<<"budgetEstimate: "<<budgetEstimate<<endl;
        howMuch();
    }
    void howMuch(){
        if(getWordCount()>1500){
            cout<<"Long Read"<<endl;
        }
        else{
            cout<<"Quick Read"<<endl;
        }
    }
};
int main(){
    TravelPost a;
    TravelPost b;
    TravelPost c;
    a.inputTravelPost();
    b.inputTravelPost();
    c.inputTravelPost();
    a.displayTravelPost();
    b.displayTravelPost();
    c.displayTravelPost();
    return 0;
}