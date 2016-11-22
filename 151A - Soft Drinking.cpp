#include <iostream>
using namespace std;
int n, k, l, c, d, p, nl, np, mm, ll, pp;
int main() {
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    mm = (k * l) / nl;
    ll = c * d;
    pp = p / np;
    cout << min(mm, min(ll, pp)) / n;
}