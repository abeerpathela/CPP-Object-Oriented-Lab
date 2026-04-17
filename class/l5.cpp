// check string is palindrome or not 
// count no. of words in string 
// count the number of palindromic words in string 
// capitalize the first chracter of each word 

// #include<iostream>
// using namespace std;
// bool isPalindrome(char str[]){
//     char revStr[]="";
//     int len=0;
//     for(int i=0; str[i]!='\0'; i++){
//         len++;
//     }
//     int j=len-1;
//     for(int i=0; str[i]!='\0';i++){
//             if(str[i]!=str[j]){
//                 return false;
//                 break;
//             }
//             j--;
//     }
//     return true;
// };
// int main(){
//     char str[]="aba";
//     if(isPalindrome(str)){
//         cout<<"yes it is a palindrome";
//     }
//     else{
//         cout<<"It is not a palindrome";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int noOfWords(char str[]){
//     int words=0;
//     for(int i=0; str[i]!='\0'; i++){
//         if((str[i]!=' ' && str[i+1]==' ') || (str[i+1]=='\0')){
//             words++;
//         }
//     }
//     return words;
// };
// int main(){
//     char str[]="this is a beautiful place";
//     cout<<"Number Of Words: "<<noOfWords(str);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool isPalindrome(char str[]){
//     int len=0;
//     for(int i=0; str[i]!='\0'; i++){
//         len++;
//     }
//     int j=len-1;
//     for(int i=0; str[i]!='\0';i++){
//             if(str[i]!=str[j]){
//                 return false;
//                 break;
//             }
//             j--;
//     }
//     return true;
// };
// int noOfPalindromicWords(char str[],int len){
//     int PalindromicWords=0;
//     char word[len];
//     int z=0;
//     for(int i=0; i<=len; i++){
//         if(str[i]!=' ' && str[i]!='\0'){
//             word[z++]=str[i];
//         }
//         else{
//          if(z>0){
//             word[z]='\0';
//             if(isPalindrome(word)){
//                 PalindromicWords++;
//             }
//             for(int k=0; k<z; k++){
//                 word[k]='\0';
//             }
//             z=0;
//         }
//         }
//     }
//    return PalindromicWords; 
// };
// int main(){
//     char str[]="wow mom civic";
//     int len=0;
//     for(int i=0; str[i]!='\0'; i++){
//         len++;
//     }
//     cout<<noOfPalindromicWords(str,len);
//     return 0;
// }

#include<iostream>
#include<cctype>
using namespace std;
void word(char str[],int len){
    char word[len];
    int z=0;
    int start=0;
    while(str[start]==' '){
        start++;
    }
    for(int i=0; str[i]!='\0'; i++){
        if((str[i]!=' ' && str[i+1]==' ' )||(str[i+1]=='\0')){
            str[start]=toupper(str[start]);
            int newStart=i+1;
            while(str[newStart]==' '){
                newStart++;
            }
            start=newStart;
        }
    }
};
int main(){
    int len=0;
    char str[]=" hello hello hello";
    for(int i=0;str[i]!='\0'; i++){
        len++;
    }
    word(str,len);
    cout<<str;
    return 0;
}