#include <iostream>
using namespace std;
int a, n, m, mis, cri;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> n >> m;
        if (n > m) {
            mis++;
        } else if(n < m) {
            cri++;
        }
    }
    if (mis > cri) {
        cout << "Mishka";
    } else if (cri > mis) {
        cout << "Chris";
    } else {
        cout << "Friendship is magic!^^";
    }
}
