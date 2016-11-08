#include <iostream>
using namespace std;
int a1, a2, a3, b1, b2, b3, n, as, bs, asd, bsd;
int main() {
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    as = a1 + a2 + a3;
    bs = b1 + b2 + b3;
    asd = as / 5;
    as -= asd * 5;
    bsd = bs / 10;
    bs -= bsd * 10;
    if (as > 0) {
        asd++;
    }
    if (bs > 0) {
        bsd++;
    }
    n -= (asd + bsd);
    if (n < 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}