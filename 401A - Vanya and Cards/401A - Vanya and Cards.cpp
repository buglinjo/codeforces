#include <iostream>
#include <algorithm>
using namespace std;
int n, x, a, s, ans;
int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s += a;
    }
    s = abs(s);
    while (s > 0) {
        if (s - x >= 0) {
            s -= x;
            ans++;
        } else {
            x--;
        }
    }
    cout << ans;
}