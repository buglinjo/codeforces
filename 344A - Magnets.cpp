#include <iostream>
using namespace std;
int a, pas = 1;
string b, c;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a - 1; i++) {
        cin >> c;
        if (b != c) {
            pas++;
            b = c;
        }
    }
    cout << pas;
}