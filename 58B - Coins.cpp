#include <iostream>
#include <algorithm>
using namespace std;
int a;
int func(int k) {
    for (int i = 2; i <= k; i++) {
        if (k % i == 0) {
            return k / i;
        }
    }
    return 0;
}
int main() {
    cin >> a;
    while (a != 1) {
        cout << a << " ";
        a = func(a);
    }
    cout << 1;
}