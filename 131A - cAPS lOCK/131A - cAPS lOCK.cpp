#include <iostream>
using namespace std;
string a;
int b;
int main() {
    cin >> a;
    if ((int) a[0] >= 97) {
        for (int i = 1; i < a.size(); i++) {
            if ((int) a[i] >= 97) {
                b++;
            }
        }
        if (b > 0) {
            cout << a;
        } else {
            cout << (char)((int) a[0] - 32);
            for (int i = 1; i < a.size(); i++) {
                cout << (char)((int) a[i] + 32);
            }
        }
    } else if ((int) a[0] <= 90) {
        for (int i = 1; i < a.size(); i++) {
            if ((int) a[i] >= 97) {
                b++;
            }
        }
        if (b > 0) {
            cout << a;
        } else {
            for (int i = 0; i < a.size(); i++) {
                cout << (char)((int) a[i] + 32);
            }
        }
    } else {
        cout << a;
    }
}