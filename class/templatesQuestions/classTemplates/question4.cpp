#include <iostream>
#include <string>
using namespace std;

template <class T1,class T2>
class Pair{
    public:
    T1 a;
    T2 b;
    Pair(T1 a,T2 b){
        this->a=a;
        this->b=b;
    }
    void show(){
        cout<<"( "<<a<<" , "<<b<<" )"<<endl;
    }
    void updateSecond(T2 UpdatedB){
        b=UpdatedB;
    }
    bool isGreater(const Pair <T1, T2> &p){
        if( a>p.a){
            return true;
        }
        return false;
    }
};

int main() {
    int id1, id2;
    string name1, name2;
    float score;
    char grade;

    cin >> id1 >> name1;
    cin >> score >> grade;
    cin >> id2 >> name2;

    Pair<int, string> p1(id1, name1);
    Pair<float, char> p2(score, grade);
    Pair<int, string> p3(id2, name2);

    cout << "Pair 1: "; p1.show();
    cout << "Pair 2: "; p2.show();
    cout << "Pair 3: "; p3.show();

    cout << "\nUpdating Pair 1 name to \"Alicia\"...\n";
    p1.updateSecond("Alicia");
    cout << "Updated Pair 1: "; p1.show();

    cout << "\nComparing Pair 1 and Pair 3 based on ID:\n";
    if (p1.isGreater(p3))
        cout << "Pair 1 has a greater first value.\n";
    else
        cout << "Pair 3 has a greater first value.\n";

    return 0;
}