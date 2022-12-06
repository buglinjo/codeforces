#include <iostream>
using namespace std;
string a;
int b;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == a[i + 1]) {
            b++;
            if (b == 6) {
                cout << "YES";
            }
        } else {
            b = 0;
        }
    }
    cout << "NO";
}