#include <iostream>
using namespace std;
int n, a, b, pr = 101, sum = 0;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (pr > b) {
            pr = b;
        }
        sum += pr * a;
    }
    cout << sum;
}