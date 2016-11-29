#include <iostream>
using namespace std;
int n, m, a, b, ans;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a >> b;
            if (a == 1 || b == 1) {
                ans++;
            }
        }
    }
    cout << ans;
}
