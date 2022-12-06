#include <iostream>
using namespace std;
int n, m, k, arr[100001];
string a;
int main() {
    cin >> a >> n;
    for (int i = 1; i < a.size(); i++) {
        arr[i + 1] = arr[i] + (a[i] == a[i - 1]);
    }
    for (int i = 1; i <= n; i++) {
        cin >> m >> k;
        cout << arr[k] - arr[m] << endl;
    }
}