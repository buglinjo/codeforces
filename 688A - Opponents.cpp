#include <iostream>
using namespace std;
int n, d, arr[101], pas, ans;
string a;
int main() {
    cin >> n >> d;
    for (int i = 0; i < d; i++) {
        cin >> a;
        for (int j = 0; j < n; j++) {
            if (a[j] == '0') {
                arr[i] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < d; i++) {
        if (arr[i] == 1) {
            pas++;
        } else {
            pas = 0;
        }
        ans = max(ans, pas);
    }
    cout << ans;
}