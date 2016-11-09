#include <iostream>
using namespace std;
int a, b, mas[4][5001], ma[4], ans;
int main() {
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cin >> b;
        mas[b][ma[b]++] = i;
    }
    ans = min(ma[1], min(ma[2], ma[3]));
    cout << ans << endl;
    for (int i = 0; i < ans; i++) {
        cout << mas[1][i] << " " << mas[2][i] << " " << mas[3][i] << endl;
    }
}