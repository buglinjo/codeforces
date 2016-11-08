#include <iostream>
#include <algorithm>
using namespace std;
int b, sti, stj, pas;
int main() {
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            cin >> b;
            if (b == 1) {
                sti = i;
                stj = j;
            }
        }
    }
    pas = abs(sti - 3) + abs(stj - 3);
    cout << pas;
}