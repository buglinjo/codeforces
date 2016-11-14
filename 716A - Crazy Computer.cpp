#include <iostream>
using namespace std;
int n, c, a, b, num = 1;
int main() {
    cin >> n >> c;
    cin >> a;
    n--;
    while (n--) {
        cin >> b;
        if (b - a <= c) {
            num++;
        } else {
            num = 1;
        }
        a = b;
    }
    cout << num;
}