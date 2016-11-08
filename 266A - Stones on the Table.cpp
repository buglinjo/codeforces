#include <iostream>
using namespace std;
string b;
int a, c;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        if (b[i] == b[i + 1]) {
            c++;
        }
    }
    cout << c;
}