#include <iostream>
using namespace std;
int n, sum = 0, mas[1000000], a, sami = 0, erti = 0, ori = 0;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 4) {
            sum++;
        } else if (a == 3) {
            sami++;
        } else if (a == 2) {
            ori++;
        } else if (a == 1) {
            erti++;
        }
    }
    sum = sum + sami;
    if (erti - sami >= 0) {
        erti = erti - sami;
        if (erti > 2 && ori % 2 != 0) {
            sum = sum + (erti - 2) / 4;
            if ((erti - 2) % 4 > 0) {
                sum++;
            }
        } else if (ori % 2 == 0 && erti > 0) {
            sum = sum + erti / 4;
            if (erti % 4 > 0) {
                sum++;
            }
        }
    }
    if (ori % 2 == 0 && ori != 0) {
        sum = sum + (ori / 2);
    } else if (ori % 2 != 0 && ori != 0) {
        sum = sum + (ori / 2) + 1;
    }
    cout << sum;
}