#include <iostream>
using namespace std;
int a, b, c;
int main() {
    cin >> a >> b >> c;
    if (c == 0) {
        if (b == a) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else if ((b < a && c > 0) || (b > a && c < 0)) {
        cout << "NO";
    } else {
        if ((b - a) % c == 0) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}