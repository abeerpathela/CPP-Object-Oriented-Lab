#include<iostream>
using namespace std;
class Restaurant{
    string restaurantName;
    string location;
    public:
    void inputRestaurant(){
        cout<<"Enter restaurant Name:";
        cin>>restaurantName;
        cout<<"Enter location:";
        cin.ignore();
        cin>>location;
    }
    void displayRestaurant(){
        cout<<endl<<"Restaurant Name: "<<restaurantName<<endl<<"Location:"<<location<<endl;
    }
};
class OnlineOrder:public Restaurant{
    double orderId;
    int delivryMinutes;
    public:
    void inputOrder(){
        inputRestaurant();
        cout<<"Enter order id: ";
        cin>>orderId;
        cout<<"Enter deliveryMinutes: ";
        cin.ignore();
        cin>>delivryMinutes;
    }
    void displayOrder(){
        displayRestaurant();
        cout<<"OrderID:"<<orderId<<endl<<"DeliveryMinutes:"<<delivryMinutes<<endl;
    }
    void checkDelay(){
        if(delivryMinutes>40){
            cout<<"Delayed Order"<<endl;
        }
        else{
            cout<<"On-Time Delivery"<<endl;
        }
    }
};
int main(){
    OnlineOrder a;
    a.inputOrder();
    a.displayOrder();
    
    OnlineOrder b;
    b.inputOrder();
    b.displayOrder();
    b.checkDelay();
    
    return 0;
}