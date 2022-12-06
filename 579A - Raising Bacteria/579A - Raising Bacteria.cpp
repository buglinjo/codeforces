#include <iostream>
#include <algorithm>
using namespace std;
int a, xar, pas;
int main() {
    cin >> a;
    while (a > 0) {
        if (pow(2, xar) <= a) {
            xar++;
        } else {
            pas++;
            a -= pow(2, xar - 1);
            xar = 0;
        }
    }
    cout << pas;
}
