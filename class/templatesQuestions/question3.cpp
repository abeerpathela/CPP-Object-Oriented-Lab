#include<iostream>
using namespace std;

template <class T>
void reverseArray(T array[],int size){
    T copyArray [size];
    int z=0;
    for(int i=size-1; i>=0; i--){
        copyArray[z++]=array[i];
    }
    for(int cpy=0; cpy<size; cpy++){
        array[cpy]=copyArray[cpy];
    }
}

int main() {
    int n1, n2;
    cin >> n1;
    int a[n1];
    for (int i = 0; i < n1; i++) cin >> a[i];
    cin >> n2;
    char b[n2];
    for (int i = 0; i < n2; i++) cin >> b[i];

    reverseArray(a, n1);
    reverseArray(b, n2);

    for (int i = 0; i < n1; i++) cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < n2; i++) cout << b[i] << " ";
}