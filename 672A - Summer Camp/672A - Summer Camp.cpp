#include <iostream>
#include <string>
using namespace std;
int n;
string a;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        a += to_string(i);
    }
    cout << a[n - 1];
}
