#include <iostream>
using namespace std;
int a, b, c;
int main() {
    cin >> a >> b >> c;
    cout << max(max((a + b + c), (a * (b + c))), max(((a + b) * c), (a * b * c)));
}