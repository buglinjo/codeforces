#include <iostream>
using namespace std;
int n, s, sti = 1, eni = 1, m, ans;
long long arr[100001];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++) {
        if (arr[i + 1] < arr[i]) {
            if (m == 1) {
                cout << "no";
                return 0;
            } else if (s == 0) {
                s++;
                sti = i;
                eni = i + 1;
            } else {
                eni = i + 1;
            }
        } else if (s != 0) {
            m = 1;
        }
    }
    if (s == 1) {
        if (sti != 1 && eni != n) {
            if ((arr[eni] >= arr[sti - 1] && arr[sti] <= arr[eni + 1])) {
                ans = 1;
            }
        } else if (sti == 1 && eni != n && eni != 0) {
            if (arr[sti] <= arr[eni + 1]) {
                ans = 1;
            }
        } else if (sti != 1 && eni == n) {
            if (arr[eni] >= arr[sti - 1]) {
                ans = 1;
            }
        } else {
            ans = 1;
        }
    } else {
        ans = 1;
    }
    if (ans == 1) {
        cout << "yes" << endl << min(sti, eni) << " " << max(sti, eni);
    } else {
        cout << "no";
    }
}