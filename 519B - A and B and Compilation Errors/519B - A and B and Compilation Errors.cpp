#include <iostream>
using namespace std;
int n;
__int64 a, b, c, suma, sumb, sumc;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        suma += a;
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> b;
        sumb += b;
    }
    cout << suma - sumb << endl;
    for (int i = 0; i < n - 2; i++) {
        cin >> c;
        sumc += c;
    }
    cout << sumb - sumc;
}