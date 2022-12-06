#include <iostream>
#include <algorithm>
using namespace std;
int a, mas[100];
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + a);
    for (int i = 0; i < a; i++) {
        cout << mas[i] << " ";
    }
}