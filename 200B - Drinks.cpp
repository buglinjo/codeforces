#include <iostream>
using namespace std;
double a, b, jami, pas;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        jami += b;
    }
    pas = jami / a;
    cout << pas;
}