#include <iostream>
using namespace std;
__int64 n, k, f, t, a = -1000000000;
int main() {
    cin >> n >> k;
    while (n--) {
        cin >> f >> t;
        if (t <= k) {
            a = max(a, f);
        } else {
            a = max(a, f - (t - k));
        }
    }
    cout << a;
}
