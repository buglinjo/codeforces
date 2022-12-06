#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= (n / 2) + 1; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > (n / 2) + 1 - i && j < (n / 2) + 1 + i) {
                cout << 'D';
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i = (n / 2); i > 0; i--) {
        for (int j = 1; j <= n; j++) {
            if (j > (n / 2) + 1 - i && j < (n / 2) + 1 + i) {
                cout << 'D';
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}