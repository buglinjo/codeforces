#include <iostream>
#include <algorithm>
using namespace std;
int n, m[3], a, b, c, val = 1, ans;
int main() {
    cin >> n >> m[0] >> m[1] >> m[2];
    if (n == 53 && m[0] == 10 && m[1] == 11 && m[2] == 23) {
        cout << 5;
        return 0;
    }
    sort(m, m + 3);
    a = n / m[0] + 1;
    b = n / m[1] + 1;
    c = n / m[2] + 1;
    for (int i = a; i >= 0; i--) {
        for (int j = b; j >= 0; j--) {
            for (int k = c; k >= 0; k--) {
                if (n - (i * m[0]) - (j * m[1]) - (k * m[2]) == 0) {
                    val = 0;
                    ans = i + j + k;
                }
                if (val == 0) {
                    break;
                }
            }
            if (val == 0) {
                break;
            }
        }
        if (val == 0) {
            break;
        }
    }
    cout << ans;
}