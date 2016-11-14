#include <iostream>
#include <algorithm>
using namespace std;
int arr[6], arr2[10];
int main() {
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 6);
    for (int i = 0; i < 6; i++) {
        arr2[arr[i]]++;
    }
    sort(arr2, arr2 + 10);
    reverse(arr2, arr2 + 10);
    if (arr2[0] == 6) {
        cout << "Elephant";
    } else if (arr2[0] == 5) {
        cout << "Bear";
    } else if (arr2[0] == 4) {
        if (arr2[1] == 2) {
            cout << "Elephant";
        } else {
            cout << "Bear";
        }
    } else {
        cout << "Alien";
    }
}