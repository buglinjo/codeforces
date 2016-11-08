#include <iostream>
using namespace std;
int a, b, c;
int main() {
    cin >> a >> b >> c;
    cout << ((c - 1) * (b - 1)) + (a * (b + c - 1));
}