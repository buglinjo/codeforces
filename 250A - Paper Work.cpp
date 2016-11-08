#include <iostream>
using namespace std;
int a, mas[105], pas = 0, c = 0, d = 0, g = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> mas[i];
        if (mas[i] < 0) {
            pas++;
        }
    }
    if (pas % 2 == 1) {
        pas++;
    }
    pas = pas / 2;
    if (pas == 0) {
        pas = 1;
    }
    cout << pas << endl;
    for (int i = 0; i < a; i++) {
        if (mas[i] < 0) {
            c++;
        }
        d++;
        if (c == 2 && pas > 1) {
            cout << d << " ";
            g += d;
            d = 0;
            c = 0;
            pas--;
        } else if (c == 2 && pas == 1) {
            break;
        }
    }
    cout << a - g;
}