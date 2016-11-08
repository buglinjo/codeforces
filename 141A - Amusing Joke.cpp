#include <iostream>
using namespace std;
int root[100], shuffled[100], pas = 1;
string a, b, c;
int main() {
    cin >> a >> b >> c;
    for (int i = 0; i < a.size(); i++) {
        root[(int) a[i]]++;
    }
    for (int i = 0; i < b.size(); i++) {
        root[(int) b[i]]++;
    }
    for (int i = 0; i < c.size(); i++) {
        shuffled[(int) c[i]]++;
    }
    for (int i = 65; i <= 90; i++) {
        if (root[i] != shuffled[i]) {
            pas = 0;
        }
    }
    if (pas == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}