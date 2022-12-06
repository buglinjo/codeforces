#include <iostream>
using namespace std;
string a;
int main() {
    cin >> a;
    for (int i = a.size() - 1; i >= 0; i--) {
        a += a[i];
    }
    cout << a;
}