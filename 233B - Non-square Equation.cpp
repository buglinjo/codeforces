#include <iostream>
#include <math.h>
using namespace std;
__int64 cj(__int64 k) {
    __int64 a = 0;
    while (k > 0) {
        a += k % 10;
        k = k / 10;
    }
    return a;
}
__int64 n, i, g, j, xn = -1;
double x1, x2;
int main() {
    cin >> n;
    for (i = 1; i <= 81; i++) {
        x1 = (-i + sqrt(i * i + 4 * n)) / 2;
        x2 = (-i - sqrt(i * i + 4 * n)) / 2;
        g = (int) x1;
        j = (int) x2;
        if (g == x1 && j == x2) {
            if (g > j && g > 0 && cj(g) == i) {
                xn = (__int64)x1;
                break;
            } else if (j > g && j > 0 && cj(j) == i) {
                xn = (__int64)x2;
                break;
            }
        }
    }
    cout << xn;
}