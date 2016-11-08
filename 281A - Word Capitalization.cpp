#include <iostream>
using namespace std;
string a;
int main() {
    cin >> a;
    if ((int) a[0] > 96) {
        a[0] -= 32;
    }
    cout << a;
}