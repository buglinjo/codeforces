#include <iostream>
using namespace std;
int n, h, a, sum = 0;
int main() {
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > h) {
            sum++;
        }
        sum++;
    }
    cout << sum;
}