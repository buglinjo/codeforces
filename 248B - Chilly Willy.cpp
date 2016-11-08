#include <iostream>
using namespace std;
int a, b = 100, i;
int main() {
    cin >> a;
    if (a == 1 || a == 2) {
        cout << "-1";
    } else if (a == 3) {
        cout << "210";
    } else {
        for (i = 0; i < a - 3; i++) {
            b = b * 10;
            b = b % 210;
        }
        b = 210 - b;
        if (b < 100) {
            cout << "1";
            for (i = 0; i < a - 3; i++) {
                cout << "0";
            }
            cout << b;
        } else {
            cout << "1";
            for (i = 0; i < a - 4; i++) {
                cout << "0";
            }
            cout << b;
        }
    }
}