#include <iostream>
using namespace std;
int n, x, y, arr[51][51];
int main() {
    cin >> n;
    for (int i = 1; i <= n * n; i++) {
        cin >> x >> y;
        if (arr[x][y] != 1) {
            for (int j = 1; j <= n; j++) {
                arr[x][j] = 1;
            }
            for (int j = 1; j <= n; j++) {
                arr[j][y] = 1;
            }
            cout << i << " ";
        }
    }
}