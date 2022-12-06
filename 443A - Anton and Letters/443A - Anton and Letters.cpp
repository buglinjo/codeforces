#include <iostream>
using namespace std;
string n;
int ar[123], sum = 0;
int main() {
    getline(cin, n);
    for (int i = 1; i < n.size(); i += 3) {
        ar[(int) n[i]] = 1;
    }
    for (int i = 0; i < 123; i++) {
        sum += ar[i];
    }
    cout << sum;
}