#include <iostream>
using namespace std;
int a, b, c, first, second, third, fourth;
int main() {
    cin >> a >> b >> c;
    first = a + b + c;
    second = 2 * (a + b);
    third = 2 * (b + c);
    fourth = 2 * (a + c);
    cout << min(first, min(second, min(third, fourth)));
}
