#include <iostream>
using namespace std;
string a, b = "hello";
int j = 0, pas = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[j]) {
            j++;
            pas++;
            
            if (pas == 5) {
                break;
            }
        }
    }
    if (pas == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
