#include <iostream>
using namespace std;
int n, j = 1, a, b, c, d;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> d;
        if (j == 4) {
            j = 1;
        }
        if (j == 1) {
            a += d;
        } else if (j == 2) {
            b += d;
        } else if (j == 3) {
            c += d;
        }
        j++;
    }
    if (a > b && a > c) {
        cout << "chest";
    } else if (b > a && b > c) {
        cout << "biceps";
    } else {
        cout << "back";
    }
}