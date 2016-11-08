#include <iostream>
using namespace std;
int a, b, pas = 0;
int main() {
    cin >> a >> b;
    pas = (a * b - 1) / (b - 1);
    cout << pas;
}