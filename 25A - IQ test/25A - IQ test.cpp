#include <iostream>
using namespace std;
int n, m, i = 0, j = 0, index = 0, indexEven, indexOdd;
int main() {
    cin >> n;
    while ((i < 2 && j < 2) || (i != 1 && j != 1)) {
        cin >> m;
        index++;
        if (m % 2 == 0) {
            i++;
            indexEven = index;
        } else {
            j++;
            indexOdd = index;
        }
    }
    if (i < j) {
        cout << indexEven;
    } else {
        cout << indexOdd;
    }
}