#include <iostream>
using namespace std;
int x, t, a, b, da, db;
int main() {
    cin >> x >> t >> a >> b >> da >> db;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (x == a - da * i + b - db * j || x == 0 || x == a - da * i || x == b - db * j) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}