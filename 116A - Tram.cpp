#include <iostream>
#include <algorithm>
using namespace std;
int a, b, c, jami = 0, mas[1000000];
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b >> c;
        jami = jami - b + c;
        mas[i] = jami;
    }
    sort(mas, mas + a);
    cout << mas[a - 1];
}