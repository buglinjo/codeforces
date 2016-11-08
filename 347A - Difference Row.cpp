#include <iostream>
#include <algorithm>
using namespace std;
int a, mas[105];
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + a);
    swap(mas[0], mas[a - 1]);
    for (int i = 0; i < a; i++) {
        cout << mas[i] << " ";
    }
}