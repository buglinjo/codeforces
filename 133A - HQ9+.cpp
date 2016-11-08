#include <iostream>
using namespace std;
string a;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9') {
            cout << "YES";
        }
    }
    cout << "NO";
}