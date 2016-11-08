#include <iostream>
#include <algorithm>
using namespace std;
int k, n, m, h, g = 0;
int main() {
    cin >> k >> n >> m;
    h = k * m;
    if (h % 100 != 0) {
        g++;
    }
    h = h / 100;
    h = h - n;
    h = h + g;
    if ((k * m / 100) - n < 0) {
        h = 0;
    }
    cout << h << endl;
}