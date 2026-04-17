#include<iostream>
using namespace std;
int sumOfArray(int arr[],int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+arr[i];
    }
    return sum;
};
int productOfArray(int arr[],int size){
    int product=1;
    for(int i=0; i<size; i++){
        product=product*arr[i];
    }
    return product;
};
int evenCount(int arr[],int size){
    int evenC=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            evenC++;
        }
    }
    return evenC;
};
int oddCount(int arr[],int size){
    int oddC=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2!=0){
            oddC++;
        }
    }
    return oddC;
};
int maxElement(int arr[],int size){
    int max=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
};
int minElement(int arr[],int size){
    int min=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
};
void reverse(int arr[],int start,int end,int size){
    if(end>=size || start>=size || start>end){
        cout<<"Index not valid!!";
    }
    else{
    int rev[size];
    int z=0;
    for(int i=end; i>=start; i--){
        rev[z]=arr[i];
        z++;
    }
    int cpy=0;
    for(int i=start; i<=end; i++){
        arr[i]=rev[cpy];
        cpy++;
    }
    }   
};
void bubbleSort(int arr[],int size){
    int NumberOfPasses=0;
    for(int i=0; i<size-1; i++){
        NumberOfPasses++;
        for(int j=0;j<size-(i+1);j++){
            if(arr[j+1]<arr[j]){
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
};
void rotate(int arr[],int size){
    int process[size];
    int z=0;
    for(int i=1; i<size;i++){
        process[z++]=arr[i];
    }
    process[z++]=arr[0];
    int cpy=0;
    for(int i=0; i<size;i++){
        arr[i]=process[cpy++];
    }
};

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter the element to be entered on index "<<i<<" : ";
        cin>>arr[i];
    }

    cout<<"Sum of elements "<<" = "<<sumOfArray(arr,size)<<endl;

    cout<<"Product of elements "<<" = "<<productOfArray(arr,size)<<endl;

    cout<<"Even number of elements = "<<evenCount(arr,size)<<endl;

    cout<<"Odd number of elements = "<<oddCount(arr,size)<<endl;

    cout<<"max = "<<maxElement(arr,size)<<endl;

    cout<<"min = "<<minElement(arr,size)<<endl;

    // int start,end;
    // cout<<"Enter the start of reverse index: ";
    // cin>>start;
    // cout<<"Enter the end of the reverse index: ";
    // cin>>end;
    // reverse(arr,start,end,size);
    // cout<<endl<<"Array after reversing: "<<endl;
    // for(int j=0; j<size; j++ ){
    //     cout<<arr[j]<<endl;
    // }

    // bubbleSort(arr,size);
    // cout<<endl<<"Array after Bubble Sort: "<<endl;
    // for(int j=0; j<size; j++ ){
    //     cout<<arr[j]<<endl;
    // }

    int k;
    cout<<"How many times you want to rotate the array: ";
    cin>>k;
    for(int l=1; l<=k; l++){
        rotate(arr,size);
    };
    cout<<endl<<"Array after Rotation : "<<endl;
    for(int j=0; j<size; j++ ){
        cout<<arr[j]<<endl;
    }
    return 0;
}