#include <iostream>
#include <algorithm>
using namespace std;
string a[8] = {
        "vaporeon",
        "jolteon",
        "flareon",
        "espeon",
        "umbreon",
        "leafeon",
        "glaceon",
        "sylveon"
};
string c;
int mas[8], b = 0, max1 = 0, ert = 0;
int main() {
    cin >> b >> c;
    for (int i = 0; i < b; i++) {
        if (c[i] != '.') {
            ert++;
        }
    }
    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < 8; j++) {
            if (c[i] != '.' && c[i] == a[j][i]) {
                mas[j]++;
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        if (mas[i] == * max_element(mas, mas + b + 1)) {
            max1 = i;
        }
    }
    if (max1 == 7 && ert == 0 && b == 6) {
        cout << "espeon";
    } else if (max1 == 7 && ert == 0 && b == 8) {
        cout << "vaporeon";
    } else {
        cout << a[max1];
    }
}