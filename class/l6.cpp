// question-1

// #include<iostream>
// #include<string>
// using namespace std;

// class Student{
//     private:
//     double rollno;
//     string name;
//     int marks;
//     public:
//     void input(){
//         cout<<"Name of the student: ";
//         getline(cin,name);
//         cout<<"Enter the roll no of the student: ";
//         cin>>rollno;
//         cout<<"Enter the marks of the student: ";
//         cin>>marks;
//     }
//     void display(){
//         cout<<"Name of Student: "<<name;
//         cout<<endl<<"Roll no of student: "<<rollno;
//         cout<<endl<<"Marks of the student: "<<marks;
//     }

// };
// int main(){
//     Student s1;
//     s1.input();
//     s1.display();
//     return 0;
// }

// question-2

// #include<iostream>
// #include<string>
// using namespace std;

// class Student{
//     private:
//     double rollnumber;
//     string name;
//     int marks_1;
//     int marks_2;
//     int marks_3;
//     public:
//     void input(){
//         cout<<"Enter name of student: ";
//         getline(cin,name);
//         cout<<"Enter rollno of Student: ";
//         cin>>rollnumber;
//         cout<<"Enter marks of subject 1: ";
//         cin>>marks_1;
//         cout<<"Enter marks of subject 2: ";
//         cin>>marks_2;
//         cout<<"Enter marks of subject 3: ";
//         cin>>marks_3;
//     };
//     void input(double a,string b,int c,int d,int e){
//         rollnumber=a;
//         name=b;
//         marks_1=c;
//         marks_2=d;
//         marks_3=e;
//     };
//     int average(){
//         int z;
//         z=(marks_1+marks_2+marks_3)/3;
//         return z;
//     };
//     void display(){
//         cout<<"Roll Number of student: "<<rollnumber<<endl;
//         cout<<"Name of student: "<<name<<endl;
//         cout<<"Marks of subject 1: "<<marks_1<<endl;
//         cout<<"Marks of subject 2: "<<marks_2<<endl;
//         cout<<"Marks of subject 3: "<<marks_3<<endl;
//         cout<<"Average of marks: "<<average()<<endl;
//     }
// };

// int main(){
//     Student s1;
//     s1.input();
//     s1.display();
//     Student s2; 
//     s2.input(1014,"Abeer Pathela",99,99,99);
//     s2.display();
//     return 0;
// }

// question-3

// #include<iostream>
// #include<string>
// using namespace std;

// class Account{
//     private:
//     double accountNumber;
//     string holderName;
//     double balance;
//     public:
//     void input(){
//         cout<<"Enter the account holder's name: ";
//         cin.ignore();
//         getline(cin,holderName);
//         cout<<"Enter account number: ";
//         cin>>accountNumber;
//         cout<<"Enter balance of account: ";
//         cin>>balance;
//     };
//     void input(string a,double b){
//         holderName=a;
//         accountNumber=b;
//         balance=0;
//     }
//     void input(string a,double b,double c){
//         holderName=a;
//         accountNumber=b;
//         balance=c;
//     }
//     void deposit(int amount){
//         balance=balance+amount;
//     }
//     void withdraw(int amount){
//         if(amount<=balance){
//             balance=balance-amount;
//             cout<<"Withdrawl of amount "<<amount<<" is successful.";
//         }
//         else{
//             cout<<"Insufficent balance.";
//         }
//     }
//     int getBalance(){
//         return balance;
//     }
//     void compare(Account &obj){
//         if(balance==obj.balance){
//             cout<<"Both are equal.";
//         }
//         else if(balance<obj.balance){
//             cout<<"Balance of Holder "<<obj.holderName<<" is more.";
//         }
//         else if(balance>obj.balance){
//             cout<<"Balance of Holder "<<holderName<<" is more.";
//         }
//     }

// };

// int main(){
//     Account a[10];
//     for(int i=0; i<10; i++){
//         cout<<endl<<"For account "<<i+1<<endl;
//         a[i].input();
//     }
//     int max=a[0].getBalance();
//     string maxName;
//     for(int i=0; i<10; i++){
//         if(a[i].getBalance()>max){
//             max=a[i].getBalance();
//         }
//     }
//     cout<<max;
//     return 0;
// }

// question-4

// #include<iostream>
// #include<string>
// using namespace std;

// class Movie{
//     private:
//     string title;
//     string genre;
//     float rating;
//     public:
//     void input(){
//         cout<<"Title of the movie: ";
//         cin.ignore();
//         getline(cin,title);
//         cout<<"Genre of the movie: ";
//         cin.ignore();
//         getline(cin,genre);
//         cout<<"Enter the rating of the movie: ";
//         cin>>rating;
//     }
//     void input(string a,string b,float c){
//         title=a;
//         genre=b;
//         rating=c;
//     }
//     float getRating(){
//         return rating;
//     }
//     bool isTop(){
//         if(rating>8.0){
//             return true;
//         }
//         return false;
//     }
//     void display(){
//         cout<<endl<<"Title of the movie: "<<title<<endl;
//         cout<<"Genre of the Movie: "<<genre<<endl;
//         cout<<"Rating of the movie: "<<rating<<endl;
//     }
// };

// int main(){
//     Movie m1[3];
//     for(int i=0; i<3; i++){
//         m1[i].input();
//     }
//     for(int j=0; j<3; j++){
//         if(m1[j].isTop()){
//             m1[j].display();
//         }
//     }
//     return 0;
// }

// question-5

// #include<iostream>
// #include<string>
// using namespace std;

// class Distance{
//     private:
//     int km;
//     int meters;
//     public:
//     void input(){
//         cout<<"How many km travelled? ";
//         cin>>km;
//         cout<<"How many meters travelled additionaly? ";
//         cin>>meters;
//     }
//     void totalDistance(){
//         cout<<endl<<"Total Distance = "<<km<<" km and "<<meters<<"m";
//     }
//     int addDistance(Distance &d){
//         return km+d.km;
//     }
// };
// int main(){
//     Distance d1;
//     Distance d2;
//     d1.input();
//     d2.input();
//     d1.totalDistance();
//     d2.totalDistance();
//     return 0;
// }

// question-6

// #include<iostream>
// using namespace std;

// class Complex{
//     private:
//     int real;
//     int imag;
//     public:
//     void input(){
//         cout<<"Enter the real part ";
//         cin>>real;
//         cout<<"Enter the imaginary part: ";
//         cin>>imag;
//     }
//     void addComplex(Complex &c){
//         int allReal;
//         int allImag;
//         allReal=real+c.real;
//         allImag=imag+c.imag;
//         cout<<endl<<allReal<<"+"<<allImag<<"i";
//     }
// };

// int main(){
//     Complex c1;
//     c1.input();
//     Complex c2;
//     c2.input();
//     c1.addComplex(c2);
//     return 0;
// }

// question-7

// #include<iostream>
// #include<string>
// using namespace std;
// class Product{
//     private:
//     double ProductID;
//     string name;
//     double price;
//     double quantity;
//     public:
//     void input(){
//         cout<<"Enter the product name: ";
//         cin.ignore();
//         getline(cin,name);
//         cout<<"Enter the prduct id: ";
//         cin>>ProductID;
//         cout<<"Enter the price of product: ";
//         cin>>price;
//         cout<<"Enter the quantity of product: ";
//         cin>>quantity;
//     }
//     int totalStock(){
//         return price*quantity;
//     }
//     void display(){
//         cout<<endl<<"Product Name: "<<name<<endl;
//         cout<<"Product id: "<<ProductID<<endl;
//         cout<<"Price of product: "<<price<<endl;
//         cout<<"Quantity of product: "<<quantity<<endl;
//         cout<<"Total stock of product: "<<totalStock()<<endl;
//     }
// };
// int main(){
//     Product p1[5];
//     for(int i=0; i<5; i++){
//         p1[i].input();
//     }
//     for(int i=0; i<5; i++){
//         cout<<endl;
//         p1[i].display();
//     }
//     return 0;
// }

// question-8

// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;

// class Employee{
//     private:
//     char name[1000];
//     double employeeID;
//     float basicPay;
//     public:
//     void input(){
//         cout<<"Enter Employee ID: ";
//         cin>>employeeID;
//         cout<<"Enter Name: ";
//         cin.ignore();
//         cin.getline(name,1000);
//         cout<<"Enter Basic Pay: ";
//         cin>>basicPay;
//     }
//     float HRA(){
//         return 0.2*basicPay;
//     }
//     float DA(){
//         return 0.34*basicPay;
//     }
//     void display(){
//         cout<<endl<<" --- Salary Slip --- "<<endl;
//         cout<<"Employee ID    :"<<employeeID<<endl;
//         cout<<"Name           :"<<name<<endl;
//         cout<<"Basic Pay      :"<<"Rs."<<basicPay<<endl;
//         cout<<"HRA (20%)      :"<<"Rs."<<HRA()<<endl;
//         cout<<"DA (34%)       :"<<"Rs."<<DA()<<endl;
//         cout<<"Gross Salary   :"<<"Rs."<<basicPay+HRA()+DA()<<endl;
//     }
// };
// int main(){
//     Employee e1;
//     e1.input();
//     e1.display();
//     return 0;
// }

// question-9

// #include<iostream>
// #include<string>
// using namespace std;
// class Account{
//     private:
//     string holderName;
//     double accountNumber;
//     double balance;

//     public:
//     Account(string a,double b,double c){
//         holderName=a;
//         accountNumber=b;
//         balance=c;
//     }
//     Account(string a,double b){
//         holderName=a;
//         accountNumber=b;
//         balance=0;
//     }
//     void deposit(int amount){
//         balance=balance+amount;
//     }
//     void withdraw(int amount){
//         if(amount<=balance){
//             balance=balance-amount;
//         }
//         else{
//             cout<<"Insufficent Balance";
//         }
//     }
//     int currentBalance(){
//         return balance;
//     }
// };
// int main(){
//     Account a1("ABC",1999992,500);
//     int option;
//     cout<<endl<<"  ---- MENU ---- "<<endl;
//     cout<<endl<<"Enter"<<endl<<" 1 to deposit "<<endl<<" 2 to withdraw "<<endl<<" 3 to check balance "<<endl;
//     cin>>option;
//     switch(option){
//         case 1:
//         int amount;
//         cout<<"Enter amount to deposit: ";
//         cin>>amount;
//         a1.deposit(amount);
//         break;
//         case 2:
//         int amount_2;
//         cout<<"Enter amount to be withdrawn: ";
//         cin>>amount_2;
//         a1.withdraw(amount_2);
//         break;
//         case 3:
//         cout<<endl<<a1.currentBalance();
//     }
// }

// question-10

// #include<iostream>
// #include<string>
// using namespace std;

// class MarksAnalyzer{
//     private:
//     int marks[10];
//     public:
//     void inputMarks(){
//         cout<<" ========== Marks Analyzer ============"<<endl<<"Enter marks for 10 tests:"<<endl;
//         for(int i=0; i<10; i++){
//             cout<<"Test "<<i+1<<" : ";
//             cin>>marks[i];
//         }
//     }
//     void displayMarks(){
//         for(int i=0; i<10; i++){
//             cout<<marks[i]<<" ";
//         }
//     }
//     int findMax(){
//         int max=marks[0];
//         for(int i=0; i<10; i++){
//             if(marks[i]>max){
//                 max=marks[i];
//             }
//         }
//         return max;
//     }
//     int findMin(){
//         int min=marks[0];
//         for(int i=0; i<10; i++){
//             if(marks[i]<min){
//                 min=marks[i];
//             }
//         }
//         return min;
//     }
//     float calculateAverage(){
//         int sum=0;
//         for(int i=0; i<10; i++){
//             sum=sum+marks[i];
//         }
//         return sum/10;
//     }
//     int searchMark(int key){
//         int result=-1;
//         int start=0;
//         int end=9;
//         while(start<end){
//             int mid;
//             mid=(start+end)/2;
//             if(marks[mid]==key){
//                 result=mid;
//                 break;
//             }
//             else if(marks[mid]<key){
//                 start=mid+1;
//             }
//             else if(marks[mid]>key){
//                 end=mid-1;
//             }
//         }
//         return result;
//     }
//     void swap(int &a,int &b){
//         int temp;
//         temp=a;
//         a=b;
//         b=temp;
//     }
//     void bubbleSort(){
//         for ( int i = 0; i < 9; i++)
//         {
//             for(int j=0; j<10-(i+1); j++){
//                 if(marks[j]>marks[j+1]){
//                     swap(marks[j],marks[j+1]);
//                 }
//             }
//         }  
//         for(int k=0; k<9; k++){
//             cout<<marks[k]<<" ";
//         }
//     }
//     void selectionSort(){
//         for(int i=0; i<9; i++){
//             int min_index=i;
//             for(int j=i+1; j<9; j++){
//                 if(marks[j]<marks[min_index]){
//                     min_index=j;
//                 }
//             }
//             swap(marks[min_index],marks[i]);
//         }
//         for(int k=0; k<9; k++){
//             cout<<marks[k]<<" ";
//         }
//     }
//     void insertionSort(){
//         for(int i=1; i<9; i++){
//             int temp=marks[i];
//             int j;
//             for(int j=i-1; j>=0; j--){
//                 if(marks[j]>temp){
//                     marks[j+1]=marks[j];
//                 }
//                 else{
//                     break;
//                 }
//             }
//             marks[j+1]=temp;
//         }
//         for(int k=0; k<9; k++){
//             cout<<marks[k]<<" ";
//         }
//     }
//     void reverseMarks(){
//         int temp[10];
//         int z=0;
//         for(int i=9; i>=0; i--){
//             temp[z++]=marks[i];
//         }
//         for(int c=0; c<10; c++){
//             marks[c]=temp[c];
//         }
//         for(int k=0; k<9; k++){
//             cout<<marks[k]<<" ";
//         }
//     }
//     void reverseMarks(int start, int end){
//         int temp[10];
//         int z=0;
//         for(int i=0; i<start; i++){
//             temp[z++]=marks[i];
//         }
//         for(int i=end; i>=start; i--){
//             temp[z++]=marks[i];
//         }
//         for(int i=end+1; i<10; i++){
//             temp[z++]=marks[i];
//         }
//         for(int c=0; c<z; c++){
//             marks[c]=temp[c];
//         }
//         for(int k=0; k<9; k++){
//             cout<<marks[k]<<" ";
//         }
//     }
//     ~MarksAnalyzer(){
//         cout<<endl<<" ============== End of Program ==========="<<endl;
//     }
// };

// int main(){
//     MarksAnalyzer m1;
//     m1.inputMarks();
//             cout<<"----------------------------------------"<<endl;
//         cout<<"Original Marks:"<<endl;
//     m1.displayMarks();
//     cout<<endl<<"----------------------------------------"<<endl;
//     cout<<"Mximum Marks: "<<m1.findMax()<<endl;
//     cout<<"Minimum Marks: "<<m1.findMin()<<endl;
//     cout<<"Average Marks: "<<m1.calculateAverage()<<endl;
//      cout<<"----------------------------------------"<<endl;
//     int find;
//     cout<<"Enter mark to search: ";
//     cin>>find;
//     cout<<endl<<"Performing Binary Search..."<<endl;
//     cout<<m1.searchMark(find)<<endl;
//      cout<<"----------------------------------------"<<endl;
//      cout<<"Marks after Bubble Sort: "<<endl;
//      m1.bubbleSort();
//       cout<<endl<<"Marks after Selection Sort:"<<endl;
//       m1.selectionSort();
//        cout<<endl<<"Marks after Insertion Sort: "<<endl;
//        m1.insertionSort();
//         cout<<endl<<"----------------------------------------"<<endl;
//         cout<<"Reversed Marks:"<<endl;
//         m1.reverseMarks();
//          cout<<"----------------------------------------"<<endl;
//          cout<<"Reversing Marks from index 3 to 7: "<<endl;
//          cout<<"Before: ";
//          m1.displayMarks();
//          cout<<endl<<"After: ";
//           m1.reverseMarks(3,7);

//     return 0;
// }


// question-11

// #include<iostream>
// #include<string>
// using namespace std;
// class IdentityCard{
//     private: 
//     string name;
//     int id;
//     public:
//     IdentityCard(string n, int i){
//         cout<<"Constructor called";
//         name=n;
//         id=i;
//     }
//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"ID: "<<id<<endl;
//     }
// };
// int main(){
//     IdentityCard i1("Abcd",123);
//     i1.display();
//     return 0;
// }


// question-12

// #include<iostream>
// #include<string>
// using namespace std;
// class Minicalculator{
//     private:
//     int num1;
//     int num2;
//     public:
//     Minicalculator(int a, int b){
//         num1=a;
//         num2=b;
//     }
//     int displaySum(){
//         return num1+num2;
//     }
// };
// int main(){
//     Minicalculator m1(1,2);
//     cout<<endl<<m1.displaySum();
//     Minicalculator m2(2,3);
//     cout<<endl<<m2.displaySum();
//     return 0;
// }

// question-13

// #include<iostream>
// #include<string>
// using namespace std;
// class Rectangle{
//     private:
//     int length;
//     int width;
//     public:
//     Rectangle(){
//         length=1;
//         width=1;
//     }
//     Rectangle(int l, int w){
//         length=l;
//         width=w;
//     }
//     int area(){
//         return length*width;
//     }
// };
// int main(){
//     Rectangle r1;
//     r1.area();
//     Rectangle r2(20,20);
//     r2.area();
//     return 0;
// }

// question-14

// #include<iostream>
// #include<string>
// using namespace std;
// class Time{
//     private:
//     int hours;
//     int minutes;
//     public:
//     Time(){
//         hours=0;
//         minutes=0;
//     }
//     Time(int h){
//         hours=h;
//         minutes=0;
//     }
//     Time(int h, int m){
//         hours=h;
//         minutes=m;
//     }
//     void displayTime(){
//         cout<<endl<<"Hours:"<<hours<<" - "<<"Minutes:"<<minutes;
//     }
// };
// int main(){
//     Time t1;
//     t1.displayTime();
//     Time t3(4);
//     t3.displayTime();
//     Time t2(4,5);
//     t2.displayTime();
//     return 0;
// }

// question-15

// #include<iostream>
// #include<string>
// using namespace std;
// class ProductRating{
//     public:
//     int ratings[5];
//     ProductRating(){
//         for(int i=0; i<5; i++){
//             int rate;
//             cout<<"Enter the rating "<<i+1<<" : ";
//             cin>>rate;
//         }
//     }
//     ProductRating(int arr[]){
//         for(int i=0; i<5; i++){
//             ratings[i]=arr[i];
//         }
//     }
//     int showAverageRating(){
//         int sum=0;
//         for(int i=0; i<5; i++){
//             sum=sum+ratings[i];
//         }
//         return sum;
//     }
//     void displayRatings(){
//         cout<<endl<<" --- Ratings --- "<<endl;
//         for(int i=0; i<5; i++){
//             cout<<endl<<"Rating for "<<i+1<<" : "<<ratings[i];
//         }
//     }
// };
// int main(){
//     int rate[]={5,5,5,1,2};
//     ProductRating p1(rate);
//     p1.displayRatings();
//     return 0;
// }

// question 16 

// #include<iostream>
// #include<string>
// using namespace std;
// class BankAccount{
//     private:
//     string name;
//     double accountNumber;
//     double balance;
//     public:
//     BankAccount(string a,double b,double c){
//         name=a;
//         accountNumber=b;
//         balance=c;
//     };
//     BankAccount(BankAccount &obj){
//         name=obj.name;
//         accountNumber=obj.accountNumber;
//         balance=obj.balance;
//     };
//     void display(){
//         cout<<"Name of the person: "<<name<<endl;
//         cout<<"Account Number: "<<accountNumber<<endl;
//         cout<<"Balance of the account: "<<balance<<endl;
//     }
// };
// int main(){
//     BankAccount a("Abcd",12345,500);
//     BankAccount b(a);
//     b.display();
//     return 0;
// }

// question-17

// #include<iostream>
// #include<string>
// using namespace std;
// class Book{
//     private:
//     string title;
//     float price;
//     public:
//     Book(string a,float b){
//         title=a;
//         price=b;
//     }
//     Book(Book &a){
//         title=a.title;
//         price=a.price;
//     }
//     void showBook(){
//         cout<<endl<<"Title of the book: "<<title<<endl;
//         cout<<"Price of the book: "<<price<<endl;
//     }
//     ~Book(){
//         cout<<"destructor"<<endl;
//     }
// };
// int main(){
//     Book b1("ABCD",999);
//     Book b2(b1);
//     b1.showBook();
//     b2.showBook();
//     return 0;
// }