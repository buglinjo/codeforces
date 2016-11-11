#include <iostream>
using namespace std;
int n, arr[101][4], price = 1001, index;
int main() {
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][0] > arr[j][0] && arr[i][1] > arr[j][1] && arr[i][2] > arr[j][2]) {
                arr[j][0] = 0;
                arr[j][1] = 0;
                arr[j][2] = 0;
                arr[j][3] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i][3] < price && arr[i][3] != 0) {
            index = i + 1;
            price = arr[i][3];
        }
    }
    cout << index;
}
