#include <iostream>
using namespace std;
int n, d, t, sum, pas;
int main() {
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> t;
        sum += t;
    }
    sum += (n - 1) * 10;
    if (sum <= d) {
        pas = 2 * (n - 1) + (d - sum) / 5;
        cout << pas;
    } else {
        cout << -1;
    }
}