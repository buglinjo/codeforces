#include <iostream>
#include <algorithm>
using namespace std;
int a, mas[105], sum, num, jami;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> mas[i];
        jami += mas[i];
    }
    sort(mas, mas + a);
    for (int i = (a - 1); i >= 0; i--) {
        if (sum <= jami / 2) {
            sum += mas[i];
            num++;
        }
    }
    cout << num;
}