#include <iostream>
#include <algorithm>
using namespace std;
int jami, k = 1, h = 0;
string a;
int func(int n) {
    int f = 0;
    while (n > 0) {
        f += n % 10;
        n = n / 10;
    }
    return f;
}

int main() {
    cin >> a;
    if (a.size() != 1) {
        for (int i = 0; i < a.size(); i++) {
            jami += a[i] - 48;
        }
        while (jami >= 10) {
            h = jami;
            jami = func(h);
            k++;
        }
        cout << k;
    } else {
        cout << 0;
    }
}