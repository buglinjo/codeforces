#include <iostream>
#include <algorithm>
using namespace std;
int n, a, b;
int main() {
    cin >> n >> a >> b;
    if (n == 1 && a == 1 && b == 1) {
        cout << 1;
    } else {
        if (b > 0) {
            if (a + b <= n) {
                cout << a + b;
            } else {
                if (b <= n) {
                    cout << b - (n - a);
                } else {
                    if (a + (b % n) == n) {
                        cout << a + (b % n);
                    } else {
                        cout << (a + b % n) % n;
                    }
                }
            }
        } else {
            if (a - abs(b) > 0) {
                cout << a - abs(b);
            } else {
                if (abs(b) < n) {
                    cout << n - (abs(b) - a);
                } else {
                    if (abs(b) % n < a) {
                        cout << a - (abs(b) % n);
                    } else {
                        cout << n - ((abs(b) % n) - a);
                    }
                }
            }
        }
    }
}