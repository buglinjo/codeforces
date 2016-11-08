#include <iostream>
#include <algorithm>
using namespace std;
long long a, pas = 0;
int main() {
    cin >> a;
    for (int i = 1; i <= a; i++) {
        pas += pow(2, i);
    }
    cout << pas;
}