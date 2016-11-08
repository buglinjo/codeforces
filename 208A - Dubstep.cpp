#include <iostream>
using namespace std;
string a;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B') {
            a.replace((size_t)i, 3, " ");
            i = -1;
        }
    }
    for (int i = 0; i < a.size(); i++) {
        if ((i == 0 && a[i] == ' ') || (i == a.size() - 1 && a[i] == ' ') || (a[i] == ' ' && a[i + 1] == ' ')) {
            a.erase((size_t)i, 1);
        }
    }
    cout << a;
}