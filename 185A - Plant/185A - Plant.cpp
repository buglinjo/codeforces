#include <iostream>
using namespace std;
__int64 a, b = 2, k = 1, jami;
int xar(__int64 n) {
    if (n > 1) xar(n / 2);
    __int64 j = n % 2;
    if (j == 1) {
        k = k * k * b % 1000000007;
    }
    if (j == 0) {
        k = k * k % 1000000007;
    }
    return 0;
}
int main() {
    cin >> a;
    xar(a);
    jami = (k * (k + 1) / 2) % 1000000007;
    cout << jami;
}