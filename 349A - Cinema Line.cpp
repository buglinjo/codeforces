#include <iostream>
using namespace std;
int n, k, numOfTF, numOfF;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k == 25) {
            numOfTF++;
        } else if (k == 50) {
            if (numOfTF >= 1) {
                numOfTF--;
                numOfF++;
            } else {
                cout << "NO";
                return 0;
            }
        } else if (k == 100) {
            if (numOfF >= 1 && numOfTF >= 1) {
                numOfF--;
                numOfTF--;
            } else if (numOfF == 0 && numOfTF >= 3) {
                numOfTF -= 3;
            } else {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}