#include <iostream>
using namespace std;
int n, m, h = 1;
int main() {
    cin >> n >> m;
    h = 1;
    while (h <= m) {
        m = m - h;
        h++;
        if (h == n + 1) {
            h = 1;
        }
    }
    cout << m;
}