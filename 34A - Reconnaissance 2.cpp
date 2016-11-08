#include <iostream>
#include <algorithm>
using namespace std;
int a, mas[105], mas1[105], h, j;
int main() {
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cin >> mas[i];
    }
    mas[a + 1] = mas[1];
    for (int i = 1; i <= a; i++) {
        mas1[i] = abs(mas[i] - mas[i + 1]);
    }
    h = * min_element(mas1 + 1, mas1 + a + 1);
    for (int i = 1; i <= a; i++) {
        if (h == mas1[i]) {
            j = i;
            break;
        }
    }
    if (j != a) {
        cout << j << " " << j + 1;
    } else {
        cout << j << " " << 1;
    }
}