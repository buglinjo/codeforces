#include <iostream>
using namespace std;
__int64 a, mas[100005], c, jami;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> c;
        mas[c + 10] += 1;
    }
    for (int i = 0; i < 10; i++) {
        jami += mas[i] * mas[20 - i];
    }
    jami += (mas[10] * (mas[10] - 1)) / 2;
    cout << jami;
}