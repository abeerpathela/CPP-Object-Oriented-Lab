#include<iostream>
using namespace std;
class Camera{
    string brand;
    int resolution;
    public:
    void inputCamera(){
        cout<<"Enter brand:";
        cin>>brand;
        cout<<"Enter resolution:";
        cin>>resolution;
    }
    void displayCamera(){
        cout<<"Brand:"<<brand<<endl<<"Resolution:"<<resolution<<endl;
    }
};
class DroneCamera: public Camera{
    int flightTime;
    bool gpsEnabled;
    public:
    void inputDrone(){
        inputCamera();
        cout<<"Enter flightTime:";
        cin>>flightTime;
        cout<<"Enter gpsEnabled:";
        cin>>gpsEnabled;
    }
    void displayDrone(){
        displayCamera();
        cout<<"FlightTime:"<<flightTime<<endl<<"Gps enabled:"<<gpsEnabled<<endl;
    }
};
int main(){
    DroneCamera a;
    a.inputDrone();
    a.displayDrone();
    DroneCamera b;
    b.inputDrone();
    b.displayDrone();
    return 0;
}