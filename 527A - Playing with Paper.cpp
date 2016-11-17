#include <iostream>
using namespace std;
__int64 a, b, ans, di;
int main() {
    cin >> a >> b;
    while (a > 0 && b > 0) {
        if (a > b) {
            di = a/b;
            ans += di;
            a -= di * b;
        } else if (b > a) {
            di = b/a;
            ans += di;
            b -= di * a;
        } else {
            ans++;
            a = 0;
            b = 0;
        }
    }
    cout << ans;
}