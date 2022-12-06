#include <iostream>
using namespace std;
int m, n, a;
int main() {
    cin >> m >> n;
    if ((m * n) % 2 == 0) {
        a = (m * n) / 2;
    } else {
        a = ((m * n) - 1) / 2;
    }
    cout << a;
}