#include <iostream>
#include <algorithm>
using namespace std;
int a, mas[105], pas = 0, ans = 0;
int main() {
    cin >> a;
    if (a == 0) {
        cout << 0;
    } else {
        for (int i = 0; i < 12; i++) {
            cin >> mas[i];
        }
        sort(mas, mas + 12);
        for (int i = 11; i >= 0; i--) {
            if (pas < a) {
                pas += mas[i];
                ans++;
            }
        }
        if (pas < a) {
            cout << "-1";
        } else {
            cout << ans;
        }
    }
}