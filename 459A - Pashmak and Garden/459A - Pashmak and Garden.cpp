#include <iostream>
#include <algorithm>
using namespace std;
int x1, y1, x2, y2, x3, y3, x4, y4, a;
int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
        a = y2 - y1;
        x3 = x1 + a;
        y3 = y1;
        x4 = x2 + a;
        y4 = y3 + a;
    } else if (y1 == y2) {
        a = x2 - x1;
        x3 = x1;
        y3 = y1 + a;
        x4 = x3 + a;
        y4 = y2 + a;
    } else {
        if (abs(x2 - x1) == abs(y2 - y1)) {
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
        } else {
            cout << -1;
            return 0;
        }
    }
    cout << x3 << " " << y3 << " " << x4 << " " << y4;
}
