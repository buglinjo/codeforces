#include <iostream>
#include <algorithm>
using namespace std;
int a, b, mas[55], minNum = 1001;
int main() {
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + b);
    for (int i = 0; i <= b - a; i++) {
        if (mas[i + a - 1] - mas[i] < minNum) {
            minNum = mas[i + a - 1] - mas[i];
        }
    }
    cout << minNum;
}