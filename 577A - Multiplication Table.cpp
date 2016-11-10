#include <iostream>
using namespace std;
int n, x, i = 1, sum = 0;
int main() {
    cin >> n >> x;
    if (n < x) {
        i = x / n;
        if (x % n != 0) {
            i++;
        }
    }
    for (i; i <= n; i++) {
        if (x % i == 0) {
            sum++;
        }
    }
    cout << sum;
}