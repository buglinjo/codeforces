#include <iostream>
using namespace std;
int a, mas1[31], mas2[31], pas = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> mas1[i] >> mas2[i];
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (mas1[i] == mas2[j]) {
                pas++;
            }
        }
    }
    cout << pas;
}