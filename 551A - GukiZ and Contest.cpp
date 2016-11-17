#include <iostream>
using namespace std;
int n, arr[2001], pos = 1;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                pos++;
            }
        }
        cout << pos << " ";
        pos = 1;
    }
}