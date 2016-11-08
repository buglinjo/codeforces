#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int jami, b, i, a, mas[105];
double n, h;
int main() {
    cin >> a >> b;
    for (i = 0; i < a; i++) {
        cin >> mas[i];
    }
    for (i = a - 1; i >= 0; i--) {
        jami += * max_element(mas, mas + a) - mas[i];
    }
    if (b >= jami) {
        n = b - jami;
        n = n / a;
        n = * max_element(mas, mas + a) + n;
        for (i = 0; i < a; i++) {
            h = n - mas[i];
            printf("%.6f\n", h);
        }
    } else {
        cout << "-1";
    }
}