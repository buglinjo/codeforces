#include <iostream>
using namespace std;
int n, a, b, d;
string c;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c >> a >> b;
        if (a >= 2400 && b > a) {
            d = 1;
            break;
        }
    }
    if (d == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
