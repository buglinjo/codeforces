#include <iostream>
using namespace std;
int n, m, a;
long long x, y, sum;
int main() {
    cin >> n >> m >> a;
    x = n / a;
    y = m / a;
    if (n % a != 0) {
        x = x + 1;
    }
    if (m % a != 0) {
        y = y + 1;
    }
    sum = x * y;
    cout << sum;
}