#include<iostream>
using namespace std;
class Appliance{
    string brand;
    float powerRating;
    public:
    void inputAppliance(){
        cout<<"Enter brand:";
        cin>>brand;
        cout<<"Enter powerRating:";
        cin>>powerRating;
    }
    void displayAppliance(){
        cout<<endl<<"Brand: "<<brand<<endl<<"powerRating: "<<powerRating<<endl;
    }
    float getPowerRating(){
        return powerRating;
    }
};
class SmartAppliance: public Appliance{
    string wifiEnabled;
    string appSupport;
    public:
    void inputSmartAppliance(){
        inputAppliance();
        cout<<"WifiEnabled:";
        cin>>wifiEnabled;
        cout<<"AppSupport:";
        cin>>appSupport;
    }
    void isWifiEnabled(){
        if(wifiEnabled=="no" || wifiEnabled=="NO"){
            cout<<endl<<"Device not eligible for voice control"<<endl;
        }
    }
    void displaySmartAppliance(){
        displayAppliance();
        cout<<"WifiEnabled:"<<wifiEnabled<<endl<<"AppSupport:"<<appSupport<<endl;
        isWifiEnabled();
    }
};
class VoiceControlledAppliance: public SmartAppliance{
    string assistantType;
    public:
    void inputVoiceControlledAppliance(){
        inputSmartAppliance();
        cout<<"Enter Assistant Type:";
        cin>>assistantType;
    }
    void displayVoiceControlledAppliance(){
        displaySmartAppliance();
        cout<<"Assistant Type: "<<assistantType<<endl;
        checkHighPowerConsumption();
    }
    void checkHighPowerConsumption(){
        if(getPowerRating()>2000){
            cout<<endl<<"High Power Consumption Device"<<endl;
        }
    }
};
int main(){
    VoiceControlledAppliance a;
    a.inputVoiceControlledAppliance();
    a.displayVoiceControlledAppliance();
    return 0;
}