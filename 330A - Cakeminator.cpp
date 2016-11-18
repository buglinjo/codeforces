#include <iostream>
using namespace std;
int n, m, arr[11][11], ind, ans;
char c;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;
            if (c == 'S') {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        ind = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1) {
                ind = 1;
                break;
            }
        }
        if (ind == 0) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = 2;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        ind = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] == 1) {
                ind = 1;
                break;
            }
        }
        if (ind == 0) {
            for (int j = 0; j < n; j++) {
                arr[j][i] = 2;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 2) {
                ans++;
            }
        }
    }
    cout << ans;
}