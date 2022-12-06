#include <iostream>
#include <algorithm>
using namespace std;
int n, b;
string a;
int main() {
    cin >> n >> b >> a;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] == 'B' && a[j + 1] == 'G') {
                swap(a[j], a[j + 1]);
                j += 1;
            }
        }
    }
    cout << a;
}