#include <iostream>
using namespace std;
int n, arr[1000001];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
        } else if (i == n - 1) {
            cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
        } else {
            cout << min(arr[i + 1] - arr[i], arr[i] - arr[i - 1]) << " " << max(arr[i] - arr[0], arr[n - 1] - arr[i]) << endl;
        }
    }
}
