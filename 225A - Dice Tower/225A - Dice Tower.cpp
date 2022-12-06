#include <iostream>
using namespace std;
int a, b, x, y, z, u, h = 1;
int main() {
    cin >> a >> b >> x >> y;
    b = 7 - b;
    for (int i = 1; i < a; i++) {
        cin >> z >> u;
        if (b == z || b == u || b == 7 - z || b == 7 - u) {
            cout << "NO";
            break;
        } else h += 1;
    }
    if (h == a) {
        cout << "YES";
    }
}