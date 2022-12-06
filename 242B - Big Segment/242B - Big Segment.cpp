#include <iostream>
using namespace std;
int a, mas1[100005], mas2[100005], x = 1000000000, y = 0, pas = -2;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> mas1[i] >> mas2[i];
    }
    for (int i = 0; i < a; i++) {
        if (mas1[i] < x) {
            x = mas1[i];
        }
        if (mas2[i] > y) {
            y = mas2[i];
        }
    }
    for (int i = 0; i < a; i++) {
        if (mas1[i] == x && mas2[i] == y) {
            pas = i;
            break;
        }
    }
    cout << pas + 1 << endl;
}