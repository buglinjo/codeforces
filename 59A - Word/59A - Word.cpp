#include <iostream>
using namespace std;
string a;
int lo = 0, up = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 97) up++;
        else lo++;
    }
    if (lo >= up) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] < 97) {
                a[i] = (char) (a[i] + 32);
            }
        }
    } else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] > 96) {
                a[i] = (char) (a[i] - 32);
            }
        }
    }
    cout << a;
}