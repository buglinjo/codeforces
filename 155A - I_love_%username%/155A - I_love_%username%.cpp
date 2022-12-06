#include <iostream>
using namespace std;
int i, t = 0, n, a;
int main() {
    int min, max;
    cin >> n >> a;
    min = a;
    max = a;
    for (i = 1; i < n; i++) {
        cin >> a;
        if (a > max) {
            max = a;
            t++;
        }else if (a < min) {
            min = a;
            t++;
        }
    }
    cout << t << endl;
}