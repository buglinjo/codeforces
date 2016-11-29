#include <iostream>
using namespace std;
int n, a, arr[101], sum, b;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        b = 0;
        for (int j = 1; j <= n; j++) {
            cin >> a;
            if(b == 0) {
                if (a == -1) {
                    b = 1;
                } else if (a == 1) {
                    arr[i] = 1;
                } else if (a == 2) {
                    arr[j] = 1;
                } else if (a == 3) {
                    arr[i] = 1;
                    arr[j] = 1;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
            sum++;
        }
    }
    cout << sum << endl;
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
            cout << i << " ";
        }
    }
}
