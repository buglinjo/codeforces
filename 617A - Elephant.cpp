#include <iostream>
using namespace std;
int a, pas;
int main() {
    cin >> a;
    pas = a / 5;
    if (a % 5 > 0) {
        pas++;
    }
    cout << pas;
}