// question-1 

// #include<iostream>
// using namespace std;
// class counter{
//     public:
//     int count;
//     counter(int count=0){
//         this->count=count;
//     }
//     counter operator ++(){
//         count++;
//         return *this;
//     }
//     void print(){
//         cout<<"count: "<<count<<endl;
//     }
//     ~counter(){
//         cout<<"the object is deployed";
//     }
// };
// int main(){
//     counter c;
//     ++c;
//     c.print();
//     ++c;
//     c.print();
//     return 0;
// }

// question-2

// #include<iostream>
// using namespace std;
// class DigitalCounter{
//     public:
//     int count;
//     DigitalCounter(){
//         count=0;
//     }
//     DigitalCounter(int count){
//         this->count=count;
//     }
//     DigitalCounter& operator ++(){
//         count++;
//         return *this;
//     }
//     void print(){
//         cout<<"cars entered till now: "<<count<<endl;
//     }
//     ~DigitalCounter(){
//         cout<<"Counter Destroyed";
//     }
// };
// int main(){
//     DigitalCounter a;
//     ++a;
//     ++a;
//     ++a;
//     ++a;
//     ++a;
//     ++a;
//     ++a;
//     a.print();
//     return 0;
// }

// question-3

// #include<iostream>
// using namespace std;
// class TicketMachine{
//     public:
//     int tickets;
//     TicketMachine(){
//         tickets=0;
//     }
//     TicketMachine(int x){
//         tickets=x;
//     }
//     TicketMachine operator --(int){
//         TicketMachine temp=*this;
//         tickets--;
//         return temp;
//     }
//     void print(){
//         cout<<"Tickets available: "<<tickets<<endl;
//     }
//     ~TicketMachine(){
//         cout<<"Machine out of service";
//     }
// };
// int main(){
//     TicketMachine t(5);
//     t--;
//     t.print();
//     return 0;
// }

// question-4

// #include<iostream>
// using namespace std;
// class BankAccount{
//     public:
//     int balance;
//     BankAccount(){
//         balance=0;
//     }
//     BankAccount(int balance){
//         this->balance=balance;
//     }
//     BankAccount& operator -(){
//         balance = -balance;
//         return *this;
//     }
//     void print(){
//         cout<<"balance: "<<balance<<endl;
//     }
//     ~BankAccount(){
//         cout<<"Account closed"<<endl;
//     }
// };
// int main(){
//     BankAccount a(500);
//     -a;
//     a.print();
//     return 0;
// }

// question-5

// #include<iostream>
// #include<string>
// using namespace std;
// class Light{
//     public:
//     string isOn;
//     Light(){
//         isOn="OFF";
//     }
//     Light(string isOn){
//         this->isOn=isOn;
//     }
//     Light& operator !(){
//         if(isOn=="OFF"){
//             isOn="ON";
//         }
//         else if(isOn=="ON"){
//             isOn="OFF";
//         }
//         return *this;
//     }
//     void show(){
//         cout<<isOn<<endl;
//     }
//     ~Light(){
//         cout<<"Light switched off permanenantly";
//     }
    
// };
// int main(){
//     Light a("ON");
//     a.show();
//     !a;
//     a.show();
//     !a;
//     a.show();
//     return 0;
// }

// question-6               // problematic question // doubt 

// #include<iostream>
// using namespace std;
// class Distance{
//     public:
//     int km;
//     static bool destroyed;
//     Distance(){
//         km=0;
//     }
//     Distance(int km){
//         this->km=km;
//     }
//     Distance operator +(Distance &object){
//         return Distance(this->km+object.km);
//     }
//     void print(){
//         cout<<km<<endl;
//     }
//     ~Distance(){
//             if(!destroyed){
//                 cout<<"Distance Object deleted"<<endl;
//                 destroyed=true;
//             }
//     }
// };
// bool Distance::destroyed=false;
// int main(){
//     Distance a(10);
//     Distance b(15);
//     Distance c=a+b;
//     c.print();
//     return 0;
// }

// question-7

// #include <iostream>
// using namespace std;

// class Matrix {
//     int a[2][2];
// public:
//     Matrix(int m[2][2]) {
//         for(int i = 0; i < 2; i++) {
//             for(int j = 0; j < 2; j++) {
//                 a[i][j] = m[i][j];
//             }
//         }
//     }
//     ~Matrix() {
//         cout << "Matrix destroyed." << endl;
//     }
//     Matrix operator*(Matrix m) {
//         int res[2][2];
//         for(int i = 0; i < 2; i++) {
//             for(int j = 0; j < 2; j++) {
//                 res[i][j] = 0;
//                 for(int k = 0; k < 2; k++) {
//                     res[i][j] += a[i][k] * m.a[k][j];
//                 }
//             }
//         }
//         return Matrix(res);
//     }
//     void display() {
//         for(int i = 0; i < 2; i++) {
//             for(int j = 0; j < 2; j++) {
//                 cout << a[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     int m1[2][2] = {{1, 2}, {3, 4}};
//     int m2[2][2] = {{5, 6}, {7, 8}};
//     Matrix matrix1(m1);
//     Matrix matrix2(m2);
//     Matrix result = matrix1 * matrix2;
//     result.display();
//     return 0;
// }

// question-8

// #include<iostream>
// using namespace std;
// class Password{
//     public:
//     string pwd;
//     static bool destroyed;
//     Password(){
//         pwd="Default password";
//     }
//     Password(string pwd){
//         this->pwd=pwd;
//     }
//     bool operator ==(Password &object){
//         if(this->pwd==object.pwd){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     ~Password(){
//         if(!destroyed){
//             cout<<"Password Object destroyed successfully"<<endl;
//             destroyed = true;
//         }
//     }
// };
// bool Password::destroyed = false;
// int main(){
//     Password a("abc");
//     Password b("abc");
//     if(a==b){
//         cout<<"Login successful"<<endl;
//     }
//     else{
//         cout<<"Login unsuccessful"<<endl;
//     }
//     return 0;
// }

// question-9

// question-10

// #include<iostream>
// using namespace std;
// class Movie{
//     public:
//     string title;
//     float rating;
//     static bool destroyed;
//     Movie(float rating){
//         this->rating=rating;
//     }
//     Movie(string title,float rating){
//         this->title=title;
//         this->rating=rating;
//     }
//     bool operator ==(Movie &object){
//         if(rating==object.rating){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     bool operator <(Movie &object){
//         if(rating<object.rating){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     ~Movie(){
//         if(!destroyed){
//             cout<<"Movie object removed"<<endl;
//             destroyed=true;
//         }
//     }
// };
// bool Movie::destroyed=false;
// int main(){
//     Movie a(2.2);
//     Movie b(2.2);
//     Movie c(2.1);
//     if(c<a){
//         cout<<"c is < then a "<<endl;
//     }
//     else{
//         cout<<"a is < then c"<<endl;
//     }
//     return 0;
// }

// question-11

// #include<iostream>
// #include<string>
// using namespace std;
// class RationalNumber{
//     public:
//     int numerator;
//     int denominator;
//     RationalNumber(int numerator, int denominator){
//         this->numerator=numerator;
//         this->denominator=denominator;
//     }
//     RationalNumber& operator /=(int val){
//         if(val==0){
//             cout<<"Cannot be divided by zero"<<endl;
//         }
//         else{
//             numerator=numerator/val;
//             denominator=denominator/val;
//         }
//         return * this;
//     }
//     void print(){
//         cout<<"Rational number: "<<numerator<<"/"<<denominator<<endl;
//     }
//     ~RationalNumber(){
//         cout<<"Rational number destroyed :"<<numerator<<"/"<<denominator<<endl;
//     }
// };
// int main(){
//     RationalNumber a(6,8);
//     a/=2;
//     a.print();
//     a/=0;
//     a.print();
//     return 0;
// }

// question-12




