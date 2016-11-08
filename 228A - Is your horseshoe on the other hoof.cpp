#include <iostream>
#include <algorithm>
using namespace std;
int mas[5], e = 3;
int main() {
    for (int i = 0; i < 4; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + 4);
    for (int i = 0; i < 3; i++) {
        if (mas[i] != mas[i + 1]) {
            e--;
        }
    }
    cout << e;
}