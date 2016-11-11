#include <iostream>
using namespace std;
char c;
int a, b, color;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y') {
                color = 1;
                break;
            }
        }
        if (color == 1) {
            break;
        }
    }
    if (color == 1) {
        cout << "#Color";
    } else {
        cout << "#Black&White";
    }
}
