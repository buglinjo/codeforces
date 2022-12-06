#include <iostream>
using namespace std;
long long func(long long n) {
    long long a = 0;
    while (n > 0) {
        if (n % 2 == 1) a++;
        n = n / 2;
    }
    return a;
}
long long a, b, pas[40], ans;
int main() {
    cin >> a;
    for (long long i = 0; i < a; i++) {
        cin >> b;
        pas[func(b)] += 1;
    }
    for (long long i = 0; i < 40; i++) {
        if (pas[i] != 0) {
            ans += pas[i] * (pas[i] - 1) / 2;
        }
    }
    cout << ans;
}