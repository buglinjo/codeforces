#include <iostream>
using namespace std;
int mas[10005], a, b, c, d, e, pas = 0;
int main() {
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        cin >> c >> d >> e;
        mas[c] -= e;
        mas[d] += e;
    }
    for (int i = 0; i <= a; i++) {
        if (mas[i] > 0) {
            pas += mas[i];
        }
    }
    cout << pas;
}