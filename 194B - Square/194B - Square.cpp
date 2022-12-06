#include <iostream>
#include <algorithm>
using namespace std;
__int64 func(__int64 g) {
    if (g % 2 == 0) {
        return (4 * g) + 1;
    } else if (g % 4 == 1) {
        return 2 * g + 1;
    } else if (g % 4 == 3) {
        return g + 1;
    }
    return 0;
}
__int64 a, b;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        cout << func(b) << endl;
    }
}