#include <iostream>
#include <algorithm>
using namespace std;
int n, p, q, a, b, d[100];
int main() {
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        d[a - 1] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> b;
        d[b - 1] = 1;
    }
    if ( * min_element(d, d + n) == 1) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}