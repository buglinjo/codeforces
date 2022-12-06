#include <iostream>
#include <algorithm>
using namespace std;
int usg(int x, int y) {
    for (int i = x; i > 0; i--) {
        if (x % i == 0 && y % i == 0) {
            return i;
        }
    }
    return 0;
}
int a, b, n, pir, meo;
int main() {
    cin >> a >> b >> n;
    while (n >= 0) {
        pir = usg(a, n);
        n -= pir;
        if (n == 0) {
            cout << 0;
            break;
        }
        meo = usg(b, n);
        n -= meo;
        if (n == 0) {
            cout << 1;
            break;
        }
    }
}