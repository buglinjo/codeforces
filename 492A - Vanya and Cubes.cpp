#include <iostream>
using namespace std;
int a, i = 0, last = 0, current = 0;
int main() {
    cin >> a;
    while (a > 0) {
        i++;
        current = last + i;
        last = current;
        a -= current;
        if (a < 0) {
            i--;
        }
    }
    cout << i;
}