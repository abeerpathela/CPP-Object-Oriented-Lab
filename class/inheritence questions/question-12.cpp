#include<iostream>
using namespace std;
class Product{
    double productID;
    string productName;
    double price;
    public:
    void inputProduct(){
        cout<<"Enter productID:";
        cin>>productID;
        cout<<"Enter ProductName:";
        cin>>productName;
    }
    double getPrice(){
        return price;
    }
    void displayProduct(){
        cout<<endl<<"Product-ID:"<<productID<<endl<<"Product-Name:"<<productName<<endl;
    }
};
class Electronics: public Product{
    int warrantyPeriod;
    double powerUsage;
    public:
    void inputElectronics(){
        inputProduct();
        cout<<"Enter warrantyPeriod:";
        cin>>warrantyPeriod;
        cout<<"Enter power usage:";
        cin>>powerUsage;
    }
    void check(){
        if(getPrice()>50000){
            cout<<endl<<"High-end gadget"<<endl;
        }
    }
    void displayElectronics(){
        displayProduct();
        cout<<"WarrantyPeriod:"<<warrantyPeriod<<endl<<"PowerUsage:"<<powerUsage<<endl;
        check();
    }
};
class Clothing: public Product{
    int size;
    string fabric;
    public:
    void inputClothing(){
        inputProduct();
        cout<<"Enter size:";
        cin>>size;
        cout<<"Enter fabric:";
        cin.ignore();
        cin>>fabric;
    }
    void displayClothing(){
        displayProduct();
        cout<<"Size:"<<size<<endl<<"Fabric:"<<fabric<<endl;
    }
};
class Grocery: public Product{
    double expiryDate;
    int weight;
    public:
    void inputGrocery(){
        inputProduct();
        cout<<"Enter expiry-date:";
        cin>>expiryDate;
        cout<<"Enter weight:";
        cin>>weight;
    }
    void checkExpiry(){
        
    }
    void displayGrocery(){
        displayProduct();
        cout<<"Expiry-Date:"<<expiryDate<<endl<<"Weight:"<<weight<<endl;
    }
};
int main(){

    return 0;
}