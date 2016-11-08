#include <iostream>
using namespace std;
int a, b, mas[505][505], sac[100005], mina = 10000000, minb = 10000000, na = 0, nb = 0;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> mas[i][j];
        }
    }
    for (int i = 2; i < 100003; i++) {
        if (sac[i] == 0) {
            for (int j = 2 * i; j < 100003; j = j + i) {
                sac[j] = 1;
            }
        }
    }
    int k = 100003;
    for (int i = 100002; i >= 2; i--) {
        if (sac[i] == 0) k = i;
        else sac[i] = k - i;
    }
    sac[1] = 1;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            na += sac[mas[i][j]];
        }
        if (mina > na) {
            mina = na;
        }
        na = 0;
    }
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            nb += sac[mas[j][i]];
        }
        if (minb > nb) {
            minb = nb;
        }
        nb = 0;
    }
    cout << min(mina, minb);
}