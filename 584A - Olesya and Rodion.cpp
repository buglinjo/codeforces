#include <iostream>
#include <algorithm>
using namespace std;
int a, b;
string c;
int main() {
    cin >> a >> b;
    if (b != 10){
        for (int i = 0; i < a; i++) {
            cout << b;
        }
    } else if(b == 10 && a != 1) {
        for (int i = 1; i < a; i++) {
            cout << 1;
        }
        cout << 0;
    } else {
        cout << -1;
    }
}