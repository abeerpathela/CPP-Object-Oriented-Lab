// count number of vowels in a sentence 
#include <iostream>
#include<string>
using namespace std;
int countVowels(string str){
    int count=0;
    string vowels="aeiouAEIOU";
    for(int i=0; i<str.length(); i++){
        char ch=str[i];
        for(int j=0; j<vowels.length(); j++){
            if(ch==vowels[j]){
                count++;
            }
        }
    }
    return count;
}
int main()
{
    string str="Hello World";
    cout<<countVowels(str);
    return 0;
}

// count a string to uppercase 
#include <iostream>
#include<string>
using namespace std;
void toUpperCase(string &str){
    for(int i=0; i<str.length(); i++){
        char ch=str[i];
        if(ch>='a' && ch<='z'){
            str[i]=str[i]-32;
        }
    }
};
int main()
{
    string str="Hello World";
    toUpperCase(str);
    cout<<str;
    return 0;
}

// count a string to uppercase 
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isPalindrome(string str){
    string rev=str;
    reverse(str.begin(),str.end());
    if(rev==str){
        return true;
    }
    return false;
}
int main()
{
    string str="aba";
    if(isPalindrome(str)){
        cout<<"Yes a plaindrome.";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}

// Number of words in a sentence 
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int numberOfWords(string str){
    int count=0;
    bool inWord=false;
    for(int i=0; i<str.length(); i++){
        char ch=str[i];
        if(ch!=' ' && !inWord){
            inWord=true;
            count++;
        }
        else if(ch==' '){
            inWord=false;
        }
    }
    return count;
}
int main()
{
    string str="Hello World ababab lllllll";
    cout<<numberOfWords(str);
    return 0;
}

// replace all spaces 
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
void replaceAllSpaces(string &str){
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            str[i]='_';
        }
    }
}
int main()
{
    string str="Hello World ababab lllllll";
    replaceAllSpaces(str);
    cout<<str;
    return 0;
}

// find the frequency of chracter in given string  
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int count(string str, char toBeFind){
    int c=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]==toBeFind){
            c++;
        }
    }
    return c;
}
int main()
{
    string str="Hello World ababab lllllll";
    cout<<count(str,'e');
    return 0;
}

// remove all duplicate chracters 
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
void RemoveAllDuplicateChracters(string &str){
    string temp;
    for(int i=0; i<str.length(); i++){
        bool found=false;
        char ch=str[i];
        for(int j=0; j<temp.length(); j++){
            if(ch==temp[j]){
                found=true;
                break;
            }
        }
        if(found==false){
            temp=temp+ch;
        }
    }
    str=temp;
}
int main()
{
    string str="Hello";
    RemoveAllDuplicateChracters(str);
    cout<<str;
    return 0;
}

// Find the first non-repeating character in a string. 
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
void firstNonRepeating(string str){
    bool workdone=false;
    for(int i=0; i<str.length(); i++){
        int count=0;
        char top=str[i];
        for(int j=0; j<str.length(); j++){
            if(top==str[j]){
                count++;
            }
        }
        if(count==1){
            workdone=true;
            cout<<top;
            break;
        }
    }
    if(!workdone){
        cout<<"No chracter found.";
    }
};
int main()
{
    string str="eelloo";
    string check="llo";
    firstNonRepeating(check);
    return 0;
}

// our own sub str 
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

void mySubStr(string str,int start, int end){
    string result;
    if(end>str.length()-1 ||start<0 ){
        cout<<"Out of range";
        return;
    }
    else{
        for(int i=start; i<end; i++){
            result=result+str[i];
        }
        cout<<result;
    }
}

int main()
{
    string str="hello, world";
    int start=0;
    int end=4;
    mySubStr(str,start,end);
    return 0;
}

