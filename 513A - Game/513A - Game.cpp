#include <iostream>
using namespace std;
int n1, n2, k1, k2;
int main() {
    cin >> n1 >> n2 >> k1 >> k2;
    if (n2 >= n1) {
        cout << "Second";
    } else {
        cout << "First";
    }
}