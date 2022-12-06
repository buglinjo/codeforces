#include <iostream>
using namespace std;
int k, l, m, n, d, mas[100005], sum = 0;
int main() {
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d / k; i++) {
        mas[i * k] = 1;
    }
    for (int i = 1; i <= d / l; i++) {
        mas[i * l] = 1;
    }
    for (int i = 1; i <= d / m; i++) {
        mas[i * m] = 1;
    }
    for (int i = 1; i <= d / n; i++) {
        mas[i * n] = 1;
    }
    for (int i = 1; i <= d; i++) {
        if (mas[i] == 1) sum++;
    }
    cout << sum;
}