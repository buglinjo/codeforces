#include <iostream>
using namespace std;
int funq(int a, int c) {
    if (a < c) {
        if (c / (a + 1) == 1) {
            return 1;
        } else if (c / (a + 1) == 2 && c % (a + 1) == 0) {
            return 1;
        }
    } else if (a >= c && a - 1 <= c) {
        return 1;
    }
    return 0;

}
int a, b , c, d, pas;
int main() {
    cin >> a >> b >> c >> d;
    pas = max(funq(a, d), funq(b, c));
    if (pas == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
