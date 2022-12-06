#include <iostream>
using namespace std;
string a;
int jami;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '7' || a[i] == '4') {
            jami++;
        }
    }
    if (jami == 4 || jami == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}