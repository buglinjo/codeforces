#include <iostream>
using namespace std;
int k, h = 0, g;
int main() {
    cin >> k;
    g = k + (k - 2);
    while (g > 0) {
        if (k == 1) {
            h = 1;
        } else {
            h = h + (g * 6);
        }
        g = g - 2;
    }
    h++;
    cout << h;
}