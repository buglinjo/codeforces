#include <iostream>
using namespace std;
int n, p, q, pas = 0;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
        if (q - p >= 2) {
            pas++;
        }
    }
    cout << pas;
}