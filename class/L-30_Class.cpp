#include <iostream>
#include <string>
using namespace std;

void check(int a) {
    if (a == 0) {
        throw 1;            // int
    }
    if (a < 0) {
        throw "Error";      // const char*
    }
}

int main() {
    try {
        try {
            int a;
            cout << "Enter value of A: ";
            cin >> a;
            cout << "A=" << a << endl;
            check(a);
        }
        catch (...) {
            cout << "Inner catch: rethrowing..." << endl;
            throw;  // RETHROW to outer catch
        }
    }
    catch (int) {
        cout << "Outer catch: No is zero" << endl;
    }
    catch (const char *msg) {
        cout << "Outer catch: " << msg << endl;
    }
    catch (...) {
        cout << "Outer catch: Unknown error" << endl;
    }

    return 0;
}
