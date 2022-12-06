#include <iostream>
#include <cmath>
using namespace std;
__int64 a, x, ans, num;
int l;
int main() {
    cin >> a;
    x = a;
    while (x != 0) {
        x /= 10;
        l++;
    }
    for (int i = l; i > 0; i--) {
        if (i == l) {
            ans += (a - round(pow(10, i - 1)) + 1) * i;
        } else {
            num = round(pow(10, i));
            ans += (num - (num / 10)) * i;
        }
    }
    cout << ans;
}