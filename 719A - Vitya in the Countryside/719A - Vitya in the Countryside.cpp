#include <iostream>
using namespace std;
int n, a, yest, tod;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (n == 1) {
            if (a == 15) {
                cout << "DOWN";
            } else if (a == 0) {
                cout << "UP";
            } else {
                cout << -1;
            }
            return 0;
        } else {
            if (i == n - 2) {
                yest = a;
            } else if (i == n - 1) {
                tod = a;
            }
        }
    }
    if (yest + 1 == tod && tod != 15 && tod != 0) {
        cout << "UP";
    } else if (yest - 1 == tod && tod != 15 && tod != 0) {
        cout << "DOWN";
    } else if (yest + 1 == tod && tod == 15) {
        cout << "DOWN";
    } else if (yest - 1 == tod && tod == 0) {
        cout << "UP";
    } else {
        cout << -1;
    }
}