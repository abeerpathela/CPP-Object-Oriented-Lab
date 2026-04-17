// Basic sum using class and objects

// #include <iostream>
// using namespace std;

// class sum{
// public:
// 	int a,b,c;
// 	sum(){
// 		cout<<"Enter the number a: ";
// 		cin>>a;
// 		cout<<"Enter the number b: ";
// 		cin>>b;
// 		c=a+b;
// 	}
// 	void result(){
// 	    cout<<"Sum Of "<<a<<" and "<<b<<" is: "<<c<<endl;
// 	}
	
// };

// int main()
// {
// 	sum object;
// 	object.result();
// 	return 0;
// }

// greatest among three using class and objects

// #include<iostream>
// using namespace std;


// class greatest{
//     public:
//     int a,b,c;
    
//     void input(){
//     cout<<"Enter number a: ";
//     cin>>a;
//     cout<<"Enter number b: ";
//     cin>>b;
//     cout<<"Enter number c: ";
//     cin>>c;
//     };
    
//     void process(){
//         if(a>b && a>c){
//             cout<<a;
//         }
//         else if(b>a && b>c){
//             cout<<b;
//         }
//         else if(c>a && c>b){
//             cout<<c;
//         }
//     }
    
// };


// int main(){
//     greatest s1;
//     s1.input();
//     s1.process();
//     return 0;
// }

// second greatest of three with greatest of three using class and objects 

// #include<iostream>
// using namespace std;


// class greatest{
//     public:
//     int a,b,c;
    
//     void input(){
//     cout<<"Enter number a: ";
//     cin>>a;
//     cout<<"Enter number b: ";
//     cin>>b;
//     cout<<"Enter number c: ";
//     cin>>c;
//     };
    
//     void greatestOfThree(){
//         if(a>b && a>c){
//             cout<<a;
//         }
//         else if(b>a && b>c){
//             cout<<b;
//         }
//         else if(c>a && c>b){
//             cout<<c;
//         }
//     };
    
//     void secondGreatestOfThree(){
//         if(a>b && a<c){
//             cout<<a;
//         }
//         else if(b>c && b<a){
//             cout<<b;
//         }
//         else if(c>a && c<b){
//             cout<<c;
//         }
//     };
    
// };


// int main(){
//     greatest s1;
//     s1.input();
//     s1.greatestOfThree();
//     s1.secondGreatestOfThree();
//     return 0;
// }

// Pass or Fail using class and objects

// #include<iostream>
// using namespace std;

// class result{
//     public:
//     int rollno,marks;
//     result(){
//         cout<<"Enter roll number of student: ";
//         cin>>rollno;
//         cout<<"Enter the marks of student: ";
//         cin>>marks;
//         if(marks>=33 && marks<=100){
//             cout<<"Pass";
//         }
//         else if(marks>100){
//             cout<<"Please enter valid marks";
//         }
//         else{
//             cout<<"Fail";
//         }
//     }
// };

// int main(){
//     result s1;
//     return 0;
// }

// hcf and lcm 

#include<iostream>
using namespace std;

class process {
public:
    int a, b;
    process() {
        cout << "Enter number a: ";
        cin >> a;
        cout << "Enter number b: ";
        cin >> b;

        int minVal = (a < b) ? a : b;
        for (int i = minVal; i >= 1; i--) {
            if (a % i == 0 && b % i == 0) {
                cout << "HCF of " << a << " and " << b << " is: " << i << endl;
                break;
            }
        }
        
        int maxVal = (a > b) ? a : b;
        for (int j = maxVal; ; j++) {
            if (j % a == 0 && j % b == 0) {
                cout << "LCM of " << a << " and " << b << " is: " << j << endl;
                break;
            }
        }
    }
};

int main() {
    process s1;
    return 0;
}
