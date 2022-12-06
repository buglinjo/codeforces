#include <iostream>
using namespace std;
double a, b;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        b = 360 / (180 - b);
        if (b == (int) b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}