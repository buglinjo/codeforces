#include <iostream>
using namespace std;
string a;
int pas = 1, num;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                num++;
            }
        }
        if (num == 0) {
            pas++;
        }
        num = 0;
    }
    if (pas % 2 == 0) {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }
}