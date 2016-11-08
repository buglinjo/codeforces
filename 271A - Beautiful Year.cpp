#include <iostream>
using namespace std;
int a, b, i, mas[5], pas;
int main() {
    cin >> a;
    a++;
    for (int k = a; k < 9100; k++) {
        b = a;
        while (b > 0) {
            mas[i] = b % 10;
            i++;
            b /= 10;
        }
        i = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (mas[i] == mas[j]) {
                    pas++;
                }
            }
        }
        if (pas == 0) {
            cout << a;
            return 0;
        }
        pas = 0;
        a++;
    }
}