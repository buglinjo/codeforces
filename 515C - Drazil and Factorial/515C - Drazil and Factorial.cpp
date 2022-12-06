#include <iostream>
#include <algorithm>
using namespace std;
int n, num;
string a, b, c = "322", d = "7222", e = "53", f = "7332";
int main() {
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        num = a[i] - 48;
        if (num > 1) {
            if (num == 4) {
                b += c;
            } else if (num == 8) {
                b += d;
            } else if (num == 6) {
                b += e;
            } else if (num == 9) {
                b += f;
            } else {
                b += a[i];
            }
        }
    }
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    cout << b;
}