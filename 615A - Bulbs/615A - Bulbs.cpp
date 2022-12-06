#include <iostream>
#include <algorithm>
using namespace std;
int n, m, k[101], a, b;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        for (int j = 0; j < a; j++) {
            cin >> b;
            k[b] = 1;
        }
    }
    if (* min_element(k + 1, k + m + 1) == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}