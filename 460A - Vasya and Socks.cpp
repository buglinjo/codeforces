#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    if (n % 2 == 0) {
        cout << n - 4 << " 4";
    } else {
        cout << n - 9 << " 9";
    }
}