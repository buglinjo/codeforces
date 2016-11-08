#include <iostream>
using namespace std;
int a;
int main() {
    cin >> a;
    if (a % 2 == 0 && a != 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}