#include <iostream>
using namespace std;
long long i;
int main() {
    cin >> i;
    if (i % 2 == 0) {
        cout << i / 2;
    } else {
        cout << -((i / 2) + 1);
    }
}