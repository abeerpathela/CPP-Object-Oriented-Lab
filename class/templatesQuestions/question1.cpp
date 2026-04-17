#include<iostream>
using namespace std;
template<class T>
T largest(T a,T b,T c){
    T answer=0;
    if(a>b && a>c){
        answer=a;
    }
    else{
        if(b>a && b>c){
            answer=b;
        }
        else{
            if(c>a && c>b){
                answer=c;
            }
        }
    }
    return answer;
    
}
int main() {
    int a, b, c;
    float p, q, r;
    char x, y, z;

    cin >> a >> b >> c;
    cin >> p >> q >> r;
    cin >> x >> y >> z;

    cout << largest(a, b, c) << endl;
    cout << largest(p, q, r) << endl;
    cout << largest(x, y, z) << endl;
}