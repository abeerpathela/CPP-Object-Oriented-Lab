// armstrong
// prime
// leap year
// form a number

// Armstrong

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     // number of digits
//     int digits=0;
//     int temp,temp2;
//     temp=num;
//     temp2=num;
//     while(temp>0){
//         digits++;
//         temp=temp/10;
//     }
//     // raised power
//     int sum=0;
//     while(temp2>0){
//         int digit;
//         digit=temp2%10;
//         int raisedPower=1;
//         for(int i=1; i<=digits; i++ ){
//             raisedPower=raisedPower*digit;
//         }
//         sum=sum+raisedPower;
//         temp2=temp2/10;
//     }
//     if(num==sum){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }
//     return 0;
// }

//  Prime

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number which is to be checked for prime: ";
//     cin>>num;
//     int IsPrime=1;
//     for(int i=2; i<num; i++){
//         if(num%i==0){
//             cout<<"Number is not prime";
//             IsPrime=0;
//         }
//     }
//     if(IsPrime==1){
//         cout<<"Number is prime";
//     }
//     return 0;
// }

// Leap year

// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter the year: ";
//     cin>>year;
//     if(year%4==0 && year%100!=0 || year%400==0){
//         cout<<"It is a leap year.";
//     }
//     else{
//         cout<<"It is not a leap year.";
//     }
//     return 0;
// }

// form a number

// #include<iostream>
// using namespace std;
// int main(){
//     int NoOfDigits;
//     cout<<"Enter the number of digits ";
//     cin>>NoOfDigits;
//     int Number=0;
//     for(int i=1; i<=NoOfDigits; i++){
//         int digit;
//         cout<<"Enter the "<<i<<" digit : ";
//         cin>>digit;
//         Number=Number*10+digit;
//     }
//     cout<<Number;
//     return 0;
// }