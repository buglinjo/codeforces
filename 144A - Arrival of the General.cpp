#include <iostream>
using namespace std;
int a, m, n = 102, mas[105], ina, inb, pas;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> mas[i];
        if (m < mas[i]) {
            m = mas[i];
            ina = i;
        }
        if (n >= mas[i]) {
            n = mas[i];
            inb = i;
        }
    }
    pas = ina + (a - inb - 1);
    if (ina > inb) {
        pas--;
    }
    cout << pas;
}