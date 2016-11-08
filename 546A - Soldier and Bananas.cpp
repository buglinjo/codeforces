#include <iostream>
using namespace std;
int k, n, w, pas = 0;
int main() {
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++) {
        pas += k * i;
    }
    if (pas - n < 0) {
        cout << 0;
    } else {
        cout << pas - n;
    }
}