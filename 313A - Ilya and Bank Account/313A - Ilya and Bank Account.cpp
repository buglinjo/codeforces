#include <iostream>
#include <algorithm>
using namespace std;
long long a, tenth, hundredth, pas;
int main() {
    cin >> a;
    if (a > 0) {
        cout << a;
    } else {
        a = abs(a);
        tenth = a % 10;
        a /= 10;
        hundredth = a % 10;
        if (tenth < hundredth) {
            pas = (a / 10) * 10 + tenth;
        } else {
            pas = a;
        }
        cout << -pas;
    }
}