#include <iostream>
using namespace std;
char invert(char c, int isFirst) {
    int d = c - 48;
    char e;
    if (isFirst == 1 && d == 9) {
        e = c;
    } else {
        if (9 - d < d) {
            e = (char) (9 - d + 48);
        } else {
            e = c;
        }
    }
    return e;
}
string a;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (i == 0) {
            a[i] = invert(a[i], 1);
        } else {
            a[i] = invert(a[i], 0);
        }
    }
    cout << a;
}