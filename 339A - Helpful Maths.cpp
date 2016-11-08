#include <iostream>
#include <algorithm>
using namespace std;
string a;
int mas[105], b;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i += 2) {
        mas[b] = a[i] - 48;
        b++;
    }
    sort(mas, mas + a.size() / 2 + 1);
    cout << mas[0];
    for (int i = 1; i < a.size() / 2 + 1; i++) {
        cout << "+" << mas[i];
    }
}