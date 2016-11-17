#include <iostream>
using namespace std;
int n;
string a, b;
int main() {
    cin >> n >> b >> a;
    if (a[0] == 'w') {
        if (n >= 5 && n < 7) {
            cout << 53;
        } else {
            cout << 52;
        }
    } else if (a[0] == 'm') {
        if (n <= 29) {
            cout << 12;
        } else if (n > 28 && n <= 30){
            cout << 11;
        } else {
            cout << 7;
        }
    }
}