#include <iostream>
using namespace std;
int b, x, a, c = 1, d = 1;
int main() {
    cin >> a >> b;
    a--;
    while (a--) {
        cin >> x;
        if (x >= b) {
            d++;
        } else {
            d = 1;
        }
        b = x;
        c = max(c, d);
    }
    cout << c;
}