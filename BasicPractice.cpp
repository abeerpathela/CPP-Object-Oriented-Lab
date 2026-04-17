// Take cp and sp and tell that it is a profit or loss
#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price of the product: ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price of the product: ";
    cin>>sp;
    if(sp>cp){
        cout<<"It's a profit of "<<sp-cp<<" !!";
    }
    else if( sp == cp ){
        cout<<"niether profit nor loss ";
    }
    else if (sp<cp){
        cout<<"It's a loss of "<<cp-sp<<" !!";
    }
    return 0;
}

// Given the length and Breadth of the rectangle write a program to find whether the area of rectangle is greater than perimeter 
#include<iostream>
using namespace std;
int main(){
    int len,bre;
    cout<<"Enter the length of the rectangle : ";
    cin>>len;
    cout<<"Enter the breadth of the rectangle : ";
    cin>>bre;
    int area;
    area=len*bre;
    int perimeter;
    perimeter=(2*len)+(2*bre);
    if(area>perimeter){
        cout<<"Yes area of rectangle is greater than perimeter.";
    }
    else{
        cout<<"Area of rectangle is not greater than perimeter.";
    }
    return 0;
}

// Take a positive number and tell that it is a three digit number or not 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>0){
        int digit=0;
        while(num>0){
            digit++;
            num=num/10;
        }
        if(digit==3){
            cout<<"Yes the number is of three digit.";
        }
        else{
            cout<<"The number is not a three digit number.";
        }
    }
    else{
        cout<<endl<<"Please enter a positive number."<<endl;
        main();
    }
    return 0;
}

// take a positive integer and tell if it is divisible by 3 and 5 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    if(num>0){
        if(num%3==0 && num%5==0){
            cout<<"Number is divisible by 3 and 5. ";
        }
        else{
            cout<<"Number is not divisible by 3 and 5. ";
        }
    }
    else{
        cout<<endl<<"Please enter a positive number. "<<endl;
        main();
    }
    return 0;
}

// take three numbers and tell whateher they can be the sides of the triangle
#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Enter the third number: ";
	cin>>c;

	if(a+b>c && a+c>b && b+c>a ) {
		cout<<"triangle can be formed.";
	}

	else {
		cout<<"triangle can not be formed.";
	}
	return 0;
}

// take a positive number and tell if it is divisible by 5 or 3 but not divisible by 15
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive number:";
    cin>>num;
    if(num>0){
        if(num%3==0 || num%5==0){
            if(num%15!=0){
                cout<<"it is divisible by 5 or 3 but not divisible by 15.";
            }
        }
    }
    else{
        cout<<endl<<"Please enter a positive number"<<endl;
    }
    return 0;
}

// take three positive numbers and tell the greatest of them 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<a;
    }
    else if(b>a && b>c){
        cout<<b;
    }
    else if(c>a && c>b){
        cout<<c;
    }
    return 0;
}

// Grading of total marks 
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the total marks that are to be graded: ";
    cin>>marks;
    if(marks>=81 && marks<=100){
        cout<<"Very Good";
    }
    else if(marks>=61 && marks<=80){
        cout<<"Good";
    }
    else if(marks>=41 && marks<=60){
        cout<<"Average";
    }
    else if(marks<=40){
        cout<<"Fail";
    }
    return 0;
}

// Given a point x and y , write a program to find out if it lies in 1st quad, 2nd quad, 3rd quad, 4th quad 
// on the x axis , y-axis, or on the origin 

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the Abcissa (x-part ) of the point";
    cin>>x;
    int y;
    cout<<"Enter the ordinate (y-part ) of the point";
    cin>>y;
    if(x==0 && y==0 ){
        cout<<"The point is on the origin.";
    }
    else if(x!=0 && y==0){
        cout<<"The point is on the x axis.";
    }
    else if(x==0 && y!=0){
        cout<<"The point is on the y axis.";
    }
    else if(x!=0 && y!=0){
        if(x>0 && y>0){
            cout<<"The point is in the 1st quad.";
        }
        else if(x<0 && y>0){
            cout<<"The point is in the 2nd quad.";
        }
        else if(x<0 && y<0){
            cout<<"The point is in the 3rd quad.";
        }
        else if(x>0 && y<0){
            cout<<"The point is in the 4th quad.";
        }
    }
    return 0;
}


// calculator
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char operatorr;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operator which you want to perform: ";
    cin>>operatorr;
    switch(operatorr){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '/':
        cout<<a/b;
        break;
        case '*':
        cout<<a*b;
        break;
        default:
        cout<<"Enter a valid operator";
    }
    return 0;
}

// take n as input from user and print hello world  that times
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number how many times you want to print hello world.";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Hello World"<<endl;
    }
    return 0;
}

// print numbers from 1 to 100
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=100; i++){
        cout<<i<<endl;
    }
    return 0;
}

// print all the even numbers from 1 to 100
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=100; i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}

// table of 19
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=10; i++){
        cout<<19<<"*"<<i<<"="<<19*i<<endl;
    }
    return 0;
}

// print table of n 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number for which table is to be performed:";
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}

// AP series of numbers
#include<iostream>
using namespace std;
int main() {
	int n,a,d;
	cout<<"Enter the number upto which you want to make you want to make AP series:";
	cin>>n;
	cout<<"Enter the first number of the series: ";
	cin>>a;
	cout<<"Enter the common diffrence of the series: ";
	cin>>d;
	int i=0;
	while(a+(i*d)<n) {
		cout<<a+(i*d)<<" ";
		i++;
	}
	return 0;
}

// GP series of the numbers
#include<iostream>
using namespace std;
int main(){
    int n,a,r;
    cout<<"Enter the number of terms of GP:";
    cin>>n;
    cout<<"Enter the first number of the series:";
    cin>>a;
    cout<<"Enter the common ratio of the series:";
    cin>>r;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a=a*r;
    }
    return 0;
}

// Highest factor of the number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=num-1; i>1; i--){
        if(num%i==0){
            cout<<"highest factor of number "<<num<<" is "<<i<<endl;
            break;
        }
    }
    return 0;
}

// write a program to check the number is composite or not 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number to be checked that it is composite or not: ";
    cin>>num;
    if(num>1){
    int isComposite=0;
    for(int i=2; i<num; i++){
        if(num%i==0){
            isComposite=1;
            break;
        }
    }
    if(isComposite==1){
        cout<<"The number is a composite number.";
    }
    else{
        cout<<"The number is a prime number.";
    }
    }
    else{
        cout<<"Numbers like 0,1 are neither prime nor composite.";
    }
    return 0;
}

// Write a program to count digits of a number
#include<iostream>
using namespace std;
int main(){
    int num,original;
    cout<<"Enter the number for which digit is to be counted:";
    cin>>num;
    original=num;
    int digit=0;
    while(num>0){
        digit++;
        num=num/10;
    }
    cout<<"The number of digits in the number "<<original<<" is "<<digit<<endl;
    return 0;
}

// write a program to print sum of the digits of the number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number for which digits are to be added: ";
    cin>>num;
    int sum=0;
    while(num>0){
        int digit;
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<sum;
    return 0;
}

// write a program to print the product of digits
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number for which product of digits is to be printed: ";
    cin>>num;
    int product=1;
    while(num>0){
        int digit;
        digit=num%10;
        product=product*digit;
        num=num/10;
    }
    cout<<product;
    return 0;
}

// reverse the number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    int rev=0;
    while(num>0){
        int digit;
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    cout<<rev;
    return 0;
}

// factorial of number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of which factorial is to be printed: ";
    cin>>num;
    int fact=1;
    for(int i=num;i>0;i--){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}

// Write a program to print the alphabet and their ASCII values parlelly
#include<iostream>
using namespace std;
int main(){
    int ascii=65;
    for(int i=ascii; i<91; i++){
        cout<<i<<" "<<(char)i<<endl;
    }
    return 0;
}

// patterns

#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=3; i++){
        cout<<endl;
        for(int j=1; j<=5; j++){
            cout<<"*";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=4; i++){
        cout<<endl;
        for(int j=1; j<=4; j++){
            cout<<j<<" ";
        }
    }
    return 0;
}

// star rectangle
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    int cols;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    for(int i=1; i<=rows; i++){
        cout<<endl;
        for(int j=1; j<=cols; j++){
            cout<<"* ";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<endl;
        for(int j=1; j<=n; j++){
            cout<<i<<" ";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<endl;
        char v;
        v=65;
        for(int j=1; j<=n; j++){
            cout<<v++<<" ";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(int i=1; i<=rows; i++){
        cout<<endl;
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
    }
    return 0;
}

// number triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<endl;
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(int i=1; i<=rows; i++){
        cout<<endl;
        char v;
        v=65;
        int q;
        q=1;
        if(i%2==0){
        for(int j=1; j<=i; j++){
           cout<<v++<<" "; 
        }
        }
        else{
            for(int k=1; k<=i; k++){
                cout<<q++<<" ";
            }
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(int i=rows; i>0; i--){
        cout<<endl;
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(int i=rows; i>0; i--){
        cout<<endl;
        int v;
        v=1;
        for(int j=1; j<=i; j++){
            cout<<v++<<" ";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(int i=1; i<=rows; i++){
        cout<<endl;
        int v;
        v=1;
        for(int j=1; j<=i; j++){
            cout<<v<<" ";
            v=v+2;
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    int v;
    v=1;
    for(int i=1; i<=rows; i++){
        cout<<endl;
        for(int j=1; j<=i; j++){
            cout<<v++<<" ";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    for(int i=1; i<=row; i++){
        cout<<endl;
        int start;
        start=0;
        if(i%2!=0){
            start=1;    
        }
        for(int j=1; j<=i; j++){
            if(j>1){
                if(start==1){
                    start=0;
                }
                else{
                    start=1;
                }
            }
            cout<<start<<" ";
        }
    }
    return 0;
}

// optimised code 
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    for(int i=1; i<=row; i++){
        cout<<endl;
        int start;
        start = i%2;
        for(int j=1; j<=i; j++){
            cout<<start<<" ";
            start=1-start;
        }
    }
    return 0;
}

// basic function in c++
#include<iostream>
using namespace std;

void hello(char name[]){
    cout<<"Hello "<<name<<endl;
}
int main(){
    char name[]="Abeer Pathela";
    hello(name);
    return 0;
}

