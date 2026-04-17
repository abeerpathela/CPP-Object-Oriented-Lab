// All Inbuilt function of #include<cstring>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[1000];
    cout<<"Enter string 1 :";
    cin.getline(str,1000);
    char str2[1000];
    cout<<"Enter string 2: ";
    cin.getline(str2,1000);
    cout<<strcmp(str,str2)<<endl; // strcmp(string_1,string_2)
    cout<<strncmp(str,str2,2)<<endl; // strncmp(string_1,string_2,number_of_chracters_to_be_compared)
    char destination[1000];
    strcpy(destination,str); // strcpy(destination_string,source_string)
    cout<<destination;
    char str_3[1000];
    strncpy(str_3,str,3); // strncpy(destination_string,source_string,number__of_chracters_to_be_copied)
    cout<<endl<<str_3;
    strcat(str,str2); // strcat(string_in_which_to_be_appended,string_to_be_appended)
    cout<<endl<<str;
    cout<<endl<<strchr(str,'l'); // strchr(string_name,'chracter_for_which_first_occurence_is_to_be_returned')
    cout<<endl<<strrchr(str,'l'); // strrchr(string_name,'chracter_for_which_last_occurence_is_to_be_returned')
    cout<<endl<<strstr(str,"ll"); // strstr(string_name,substring_to_be_found)
    cout<<endl<<strpbrk("HELLO","WORLD"); // strpbrk(string_1,string_2)
    // strpbrk -> finds first matching chracter from str2 in str1 
    
    return 0;
}