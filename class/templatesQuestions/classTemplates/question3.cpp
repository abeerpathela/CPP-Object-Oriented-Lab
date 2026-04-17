#include <iostream>
#include <string>
using namespace std;

//Class Template (Display)
template <class T = int>
class Display{
    public:
    T val;
    Display(T val){
        this->val=val;
    }
    void show(){
        cout<<val<<endl;
    }
};

int main() {
    int a; string s;
    cin >> a >> s;

    Display<> d1(a);             // uses default int
    Display<string> d2(s);       // uses custom string

    cout << "Default type (int): "; d1.show();
    cout << "Custom type (string): "; d2.show();
}