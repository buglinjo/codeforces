#include <iostream>
#include <algorithm>
using namespace std;
int a, mas[26];
string b;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        if (b[i] > 96) {
            mas[(int) b[i] - 97] = 1;
        } else {
            mas[(int) b[i] - 65] = 1;
        }
    }
    if(* min_element(mas, mas + 26) == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}