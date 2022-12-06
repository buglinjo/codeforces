#include <iostream>
using namespace std;
int a, b, e;
string ma, mi;
int main() {
    cin >> a >> b;
    if (b == 0) {
        if (a == 1) {
            cout << "0 0";
        } else {
            cout << "-1 -1";
        }
        return 0;
    }
    for (int i = 0; i < a; i++) {
        e = min(b, 9);
        ma += (char)(e + 48);
        b -= e;
    }
    if (b > 0) {
        cout << "-1 -1";
        return 0;
    }
    for (int i = a - 1; i >= 0; i--) {
        mi += ma[i];
    }
    for (int i = 0; i < mi.size(); i++) {
        if (mi[i] != '0') {
            mi[i]--;
            mi[0]++;
            break;
        }
    }
    cout << mi << " " << ma;
}