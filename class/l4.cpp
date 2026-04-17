// shift all the negitive numbers to one side of array while maintaining the relative order of elements

// by making of new array 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9]={4,2,-1,3,-6,-5,8,-45,23};
//     int pos[9];
//     int z=0;
//     int neg[9];
//     int q=0;
//     for(int i=0; i<9; i++){
//         if(arr[i]<0){
//             neg[q++]=arr[i];
//         }
//         else if(arr[i]>=0){
//             pos[z++]=arr[i];
//         }
//     }
//     int cpy=-1;
//     for(int j=0; j<q; j++){
//         arr[++cpy]=neg[j];
//     }
//     for(int j=0; j<z; j++){
//         arr[++cpy]=pos[j];
//     }

//     // printing array 
//     for(int i=0; i<=cpy; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// in same array 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9]={4,2,-1,3,-6,-5,8,-45,23};
//     int index=0;
//     for(int i=0; i<8; i++){
//             if(arr[i]<0){
//                 int temp;
//                 temp=arr[i];
//                 for(int j=i;j>index;j--){
//                     arr[j]=arr[j-1];
//                 }
//                 arr[index++]=temp;
//             }
//     }
//     // printing array 
//     for(int i=0; i<=8; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// find the first occurence, last occurence, count of k in sorted array using binary search 

#include<iostream>
using namespace std;
int binarySearchFirstOccurence(int arr[],int k){
    int start=0;
    int end=27;
    int indexOfK;
    while(start<=end){
        int mid;
        mid=(start+end)/2;
        if(arr[mid]==k){
            indexOfK=mid;
            end=mid-1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
    }
    return indexOfK;
};
int binarySearchLastOccurence(int arr[],int k){
    int start=0;
    int end=27;
    int indexOfK;
    while(start<=end){
        int mid;
        mid=(start+end)/2;
        if(arr[mid]==k){
            indexOfK=mid;
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
    }
    return indexOfK;
};
int main(){
    int arr[28]={1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,5,5,5,5,5,5,5,5,6,6,6,6,6};
    int k; 
    cout<<"Enter the value of k:";
    cin>>k;
    cout<<"First Occurence of " <<k<<" is "<<binarySearchFirstOccurence(arr,k)<<endl;
    cout<<"Last occurence of "<<k<<" is "<<binarySearchLastOccurence(arr,k)<<endl;
    return 0;
}