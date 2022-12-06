#include <iostream>
using namespace std;
int mas[105], a;
int main() {
    cin >> a;
    for (int i = 1; i <= a; i++) {
        mas[i] = i;
    }
    for (int j = 0; j <= a - 1; j += 2) {
        if (a % 2 == 0) {
            cout << mas[j + 2] << " " << mas[j + 1] << " ";
        } else {
            cout << -1;
            break;
        }
    }
}