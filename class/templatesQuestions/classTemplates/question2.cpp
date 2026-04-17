#include <iostream>
using namespace std;

//Average Class Template
template<class T>
class Average{
    T tempArray[100];
    int tempSize;
    public:
    Average(T array[],int size){
        for(int i=0; i<size; i++){
            tempArray[i]=array[i];
        }
        tempSize=size;
    }
    T findAverage(){
        T sum=0;
        for(int i=0; i<tempSize; i++){
            sum=sum+tempArray[i];
        }
        T avg;
        avg=sum/tempSize;
        return avg;
    }
};

int main() {
    int n1, n2;
    cin >> n1;
    int a[n1]; for (int i = 0; i < n1; i++) cin >> a[i];
    cin >> n2;
    float b[n2]; for (int i = 0; i < n2; i++) cin >> b[i];

    Average<int> A1(a, n1);
    Average<float> A2(b, n2);

    cout << "Average of int array: " << A1.findAverage() << endl;
    cout << "Average of float array: " << A2.findAverage() << endl;
}
