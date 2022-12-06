#include <iostream>
using namespace std;
int a, b;
int rem = 0, rev = 0;
int main() {
    cin >> a >> b;
    while (b != 0) {
        rem = b % 10;
        b = b / 10;
        rev = rev * 10 + rem;
    }
    a = a + rev;
    cout << a;
}