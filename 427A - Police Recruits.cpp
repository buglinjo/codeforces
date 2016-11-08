#include <iostream>
using namespace std;
double a, b, pas, pas1 = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        pas += b;
        if (pas < 0) {
            pas1++;
            pas = 0;
        }
    }
    cout << pas1;
}