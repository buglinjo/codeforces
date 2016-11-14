#include <iostream>
#include <algorithm>
using namespace std;
int a, b, c;
int main() {
    cin >> a >> b >> c;
    if (c >= abs(a) + abs(b) && (c - (abs(a) + abs(b))) % 2 == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}