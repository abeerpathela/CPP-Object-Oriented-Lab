// #include<iostream>
// using namespace std;
// int func1(int a) throw (int) {      // now this function can throw only exception of int type   // older way 
//     if(a<0){
//         throw -1;
//     }
// }
// int main(){

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int func1(int a) noexcept{      // new way 
//     if(a<0){
//         throw -1;
//     }
// }
// int main(){

//     return 0;
// }


// practice problem from notion 
#include <iostream>
#include <string>
using namespace std;

// Low-level function
void kitchen(string level) {
    cout << "Kitchen: Fire detected! Level = " << level << endl;
    throw level;  // Throw the fire level
}

// Mid-level function
void building(string level) {
    try {
        kitchen(level);
    }
    catch (string e) {
        if (e == "small") {
            cout << "Building staff: Fire controlled with extinguisher." << endl;
        } else {
            cout << "Building staff: Fire too big! Calling Fire Department." << endl;
            throw;  // Rethrow to higher level
        }
    }
}

// High-level function
void fireDepartment(string level) {
    try {
        building(level);
    }
    catch (string e) {
        if (e == "medium") {
            cout << "Fire Department: Fire handled successfully with hoses." << endl;
        } else {
            cout << "Fire Department: Fire uncontrollable! Escalating to NDRT." << endl;
            throw;  // Rethrow to main()
        }
    }
}

int main() {
    string level;
    cout << "Enter fire level (small/medium/large): ";
    cin >> level;

    try {
        fireDepartment(level);
    }
    catch (string e) {
        cout << "NDRT: National team deployed! Fire finally under control." << endl;
    }

    return 0;
}


