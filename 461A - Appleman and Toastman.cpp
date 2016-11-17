#include <iostream>
#include <algorithm>
using namespace std;
__int64 n, arr[300001], sum, suma, sumb;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    suma = sum;
    if (n != 1) {
        sum *= 2;
    }
    for (int i = 0; i < n - 2; i++) {
        sumb = suma - arr[i];
        sum += sumb;
        suma -= arr[i];
    }
    cout << sum;
}