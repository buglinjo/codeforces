#include <iostream>
#include <algorithm>
using namespace std;
int na, nb, k, m, ara[100001], arb[100001];
int main() {
    cin >> na >> nb >> k >> m;
    for (int i = 0; i < na; i++) {
        cin >> ara[i];
    }
    for (int i = 0; i < nb; i++) {
        cin >> arb[i];
    }
    reverse(arb, arb + nb);
    if (* max_element(ara, ara + k) < * min_element(arb, arb + m)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}