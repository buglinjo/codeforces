#include <iostream>
using namespace std;
int a, ones, zeros, m;
string b;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        if (b[i] == '1') {
            ones++;
        } else {
            zeros++;
        }
    }
    m = min(ones, zeros);
    cout << a - (m * 2);
}