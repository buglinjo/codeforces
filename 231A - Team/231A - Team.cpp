#include <iostream>
using namespace std;
int a, b, c, d, sum = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b >> c >> d;
        if ((b + c + d) > 1) {
            sum++;
        }
    }
    cout << sum;

}