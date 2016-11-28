#include <iostream>
using namespace std;
int a, b, c, d, v, m;
int main() {
    cin >> a >> b >> c >> d;
    m = max(3 * a / 10, a - a / 250 * c);
    v = max(3 * b / 10, b - b / 250 * d);
    if (m > v) {
        cout << "Misha";
    } else if (v > m) {
        cout << "Vasya";
    } else {
        cout << "Tie";
    }
}