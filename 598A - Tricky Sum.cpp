#include <iostream>
using namespace std;
int t;
__int64 n, sum, sum2, num;
int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        num = 1;
        sum2 = 0;
        sum = n * (n + 1) / 2;
        while (num <= n) {
            sum2 += num;
            num *= 2;
        }
        cout << sum - sum2 * 2 << endl;
    }
}