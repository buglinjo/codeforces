#include <iostream>
using namespace std;
int k, r, h = 1, i = 0, j = 1;
bool b = true;
int main() {
    cin >> k >> r;
    while (b) {
        i++;
        h = k * i;
        if (h % 10 == 0 || h % 10 == r) {
            b = false;
        }
    }
    cout << i;
}