#include <iostream>
using namespace std;
int i, n;
string mas[] = {
        "Sheldon",
        "Leonard",
        "Penny",
        "Rajesh",
        "Howard"
};
int main() {
    cin >> n;
    n--;
    while (n >= 5) {
        n = n - 5;
        n = n / 2;
    }
    cout << mas[n] << endl;
}