#include <iostream>
using namespace std;
unsigned long long a, c;
long b, sum;
int main() {
    cin >> a >> b;
    c = 1;
    while ((c < a) && (b > 1)) {
        c += b - 1;
        b--;
        sum++;
    }
    if (b == 1 && c < a) {
        cout << "-1";
    } else {
        cout << sum;
    }
}