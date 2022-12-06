#include <iostream>
using namespace std;
int n, a, b;
int main() {
    cin >> n >> a >> b;
    n = n - a;
    if (n <= b) {
        cout << n;
    } else {
        cout << b + 1;
    }
}