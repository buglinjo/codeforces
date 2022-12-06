#include <iostream>
using namespace std;
__int64 n, x, d, ans;
char c;
int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> c >> d;
        if (c == '+') {
            x += d;
        } else if (d <= x) {
            x -= d;
        } else {
            ans++;
        }
    }
    cout << x << " " << ans;
}