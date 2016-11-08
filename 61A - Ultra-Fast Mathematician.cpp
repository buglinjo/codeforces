#include <iostream>
using namespace std;
string a, b;
int mas[105];
int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            mas[i] = 0;
        } else {
            mas[i] = 1;
        }
    }
    for (int i = 0; i < a.size(); i++) {
        cout << mas[i];
    }
}