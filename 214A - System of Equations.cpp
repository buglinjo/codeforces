#include <iostream>
using namespace std;
int n, m, ans;
int main() {
    cin >> n >> m;
    for (int i = 0; i <= max(n, m); i++) {
        for (int j = 0; j <= max(n, m); j++) {
            if ( ((i * i) + j) == n && ((j * j) + i) == m) {
                ans++;
            }
        }
    }
    cout << ans;
}