#include <iostream>
using namespace std;
string a, b;
int pas = 0;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[a.size() - 1 - i]) {
            pas++;
        }
    }
    if (pas > 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}