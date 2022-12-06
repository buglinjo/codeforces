#include <iostream>
#include <algorithm>
using namespace std;
int n, k, mas[2001], sum = 0;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> mas[i];
    }
    sort(mas + 1, mas + n + 1);
    for (int i = 1; i <= n / 3; i++) {
        if (mas[i * 3] + k <= 5) {
            sum++;
        }
    }
    cout << sum;
}