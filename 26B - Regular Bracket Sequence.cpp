#include <iostream>
using namespace std;
string a;
int b, c;
int main() {
    cin >> a;
    b = a.size();
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(') {
            c++;
        } else if (a[i] == ')') {
            c--;
            if (c < 0) {
                b--;
                c = 0;
            }
        }
    }
    cout << b - c;
}