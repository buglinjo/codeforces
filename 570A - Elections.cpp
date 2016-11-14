#include <iostream>
using namespace std;
int n, m, a, arr[101], ma = -1, ind = 1;
int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a;
            if (ma < a) {
                ma = a;
                ind = j;
            }
        }
        arr[ind]++;
        ma = -1;
    }
    for (int i = 1; i <= n; i++) {
        if (ma < arr[i]) {
            ma = arr[i];
            ind = i;
        }
    }
    cout << ind;
}