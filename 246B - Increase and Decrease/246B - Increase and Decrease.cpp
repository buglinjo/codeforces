#include <iostream>
using namespace std;
int a, b, pas = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        pas += b;
    }
    if (pas % a == 0) {
        cout << a;
    } else {
        cout << a - 1;
    }
}