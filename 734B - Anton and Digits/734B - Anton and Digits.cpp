#include <iostream>
using namespace std;
int a2, a3, a5, a6, b, c;
int main() {
    cin >> a2 >> a3 >> a5 >> a6;
    b = min(a2, min(a5, a6));
    a2 -= b;
    a5 -= b;
    a6 -= b;
    c = min(a2, a3);
    cout << (b * 256) + (c * 32);
}