#include<iostream>
using namespace std;
class Animal{
    string species;
    string habitat;
    public:
    void inputAnimal(){
        cout<<"Enter species:";
        cin>>species;
        cout<<"Enter habitat:";
        cin>>habitat;
    }
    void displayAnimal(){
        cout<<endl<<"Species:"<<species<<endl<<"Habitat:"<<habitat<<endl;
    }
};
class TaggedAnimal: public Animal{
    int tagID;
    string dateTagged;
    public:
    void inputTaggedAnimal(){
        inputAnimal();
        cout<<"Enter TagID:";
        cin>>tagID;
        cout<<"Enter dateTagged:";
        cin>>dateTagged;
    }
    void displayTaggedAnimal(){
        displayAnimal();
        cout<<"TagID:"<<tagID<<endl<<"Date-Tagged:"<<dateTagged<<endl;
    }
};
class MigrationData: public TaggedAnimal{
    float distanceTravelled;
    string migrationSeason;
    public:
    float getDistance(){
        return distanceTravelled;
    }
    void inputMigrationData(){
        inputTaggedAnimal();
        cout<<"Enter Distance travelled:";
        cin>>distanceTravelled;
        cout<<"Enter Migration Season:";
        cin>>migrationSeason;
    }
    void checkLongMigration(){
        if(distanceTravelled>1000){
            cout<<endl<<"Long Migration"<<endl;
        }
    }
    void displayMigrationData(){
        displayTaggedAnimal();
        cout<<"Distance Travelled:"<<distanceTravelled<<endl<<"Migrtion Season:"<<migrationSeason<<endl;
        checkLongMigration();
    }
};
int main(){
    int size;
    cout<<"Enter Size:";
    cin>>size;
    MigrationData* a = new MigrationData[size];
    float totalDistance=0;
    for(int i=0; i<size; i++){
        a[i].inputMigrationData();
        totalDistance=totalDistance+a[i].getDistance();
    } 
    for(int i=0; i<size; i++){
        a[i].displayMigrationData();
    }
    cout<<endl<<"Average distance travelled:"<<totalDistance/size<<endl;
    return 0;
}