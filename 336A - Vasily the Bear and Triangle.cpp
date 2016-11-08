#include <iostream>
using namespace std;
long long a, b;
int main() {
    cin >> a >> b;
    if (a > 0 && b > 0) {
        cout << 0 << " " << a + b << " " << a + b << " " << 0;
    }
    if (a < 0 && b > 0) {
        cout << -(-(a) + b) << " " << 0 << " " << 0 << " " << -(a) + b;
    }
    if (a > 0 && b < 0) {
        cout << 0 << " " << -(-(b) + a) << " " << a - (b) << " " << 0;
    }
    if (a < 0 && b < 0) {
        cout << -(-(a) - (b)) << " " << 0 << " " << 0 << " " << -(-(a) - (b));
    }
}