#include <iostream>
using namespace std;
long long a, b, pas = 0;
int main() {
    cin >> a >> b;
    if (a % 2 == 0) {
        if (b <= a / 2) {
            pas = b * 2 - 1;
        } else {
            pas = (b - (a / 2)) * 2;
        }
    } else {
        if (b <= a / 2 + 1) {
            pas = b * 2 - 1;
        } else {
            pas = (b - (a / 2 + 1)) * 2;
        }
    }
    cout << pas;
}