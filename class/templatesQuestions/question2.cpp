#include<iostream>
using namespace std;
template <class T>
T average(T array[],int size){
    T avg=0;
    T sum=0;
    for(int i=0; i<size; i++){
        sum=sum+array[i];
    }
    avg=sum/size;
    return avg;
};
int main() {
    int n1, n2;
    cin >> n1;
    int a[n1];
    for (int i = 0; i < n1; i++) cin >> a[i];
    cin >> n2;
    float b[n2];
    for (int i = 0; i < n2; i++) cin >> b[i];

    cout << "Average of integers: " << average(a, n1) << endl;
    cout << "Average of floats: " << average(b, n2) << endl;
}
