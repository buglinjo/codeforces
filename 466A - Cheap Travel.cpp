#include <iostream>
using namespace std;
int n, m, ans;
double a, b;
int main() {
    cin >> n >> m >> a >> b;
    if (a * n > (b / m) * n) {
        if (n % m == 0) {
            ans = (int) (n / m * b);
        } else if (n < m) {
            ans = (int) min(a * n, b);
        } else {
            if (a < b) {
                ans = (int) ((n / m * b) + (n % m * a));
            } else {
                ans = (int) ((n / m * b) + b);
            }
        }
    } else {
        ans = (int) (n * a);
    }
    cout << ans;
}