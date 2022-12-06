#include <iostream>
using namespace std;
int a, b;
int main() {
    cin >> a >> b;
    while (2 * a != b && a > 0) {
        a -= 1;
        b -= 3;
    }
    if (a * 2 == b) {
        cout << a;
    } else {
        cout << 0;
    }
}