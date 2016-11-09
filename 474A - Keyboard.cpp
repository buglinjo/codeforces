#include <iostream>
using namespace std;
string a, b, c = "qwertyuiopasdfghjkl;zxcvbnm,./";
int ite = 0;
int main() {
    cin >> a >> b;
    if (a == "R") {
        ite = -1;
    } else if (a == "L") {
        ite = 1;
    }
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < 30; j++) {
            if (c[j] == b[i]) {
                b[i] = c[j + ite];
                break;
            }
        }
    }
    cout << b;
}