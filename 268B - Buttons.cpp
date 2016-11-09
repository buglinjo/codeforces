#include <iostream>
using namespace std;
int a, v, pas = 0;
int main() {
    cin >> a;
    pas += a;
    v = a - 1;
    for (int i = 2; i <= a; i++) {
        pas += (v - 1) * i + 1;
        v--;
    }
    cout << pas;
}