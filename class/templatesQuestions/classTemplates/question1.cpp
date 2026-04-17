#include <iostream>
using namespace std;
template<class T>
class Data{
    public:
    T val;
    Data(T val){
        this->val=val;
    }
    T show(){
        return val;
    }
};
int main() {
    int i; char c; float f;
    cin >> i >> c >> f;

    Data<int> d1(i);
    Data<char> d2(c);
    Data<float> d3(f);

    cout << "Integer: "<< d1.show()<<endl;
    cout << "Character: "<<d2.show()<<endl;
    cout << "Float: "<< d3.show()<<endl;
}