#include <iostream>
using namespace std;
int n, a, c, x, m, r = -1;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        c += a;
        x += 1 - a * 2;
        r = max(r, x - m);
        m = min(x, m);
    }
    cout << r + c;
}