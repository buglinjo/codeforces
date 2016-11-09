#include <iostream>
using namespace std;
int n, m;
int main() {
    cin >> n >> m;
    if (n < m) {
        cout << -1;
        return 0;
    } else {
        cout << (n + (2 * m) - 1) / 2 / m * m;
    }
}