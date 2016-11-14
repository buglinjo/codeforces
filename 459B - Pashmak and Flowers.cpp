#include <iostream>
#include <algorithm>
using namespace std;
__int64 a, arr[2000001], numOfMinElements = 1, numOfMaxElements = 1, dif, num = 1;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    if (arr[0] != arr[a - 1]) {
        for (__int64 i = 1; i < a; i++) {
            if (arr[i] == arr[i - 1]) {
                numOfMinElements++;
            } else {
                break;
            }
        }
        for (__int64 i = a - 2; i > -1; i--) {
            if (arr[i] == arr[i + 1]) {
                numOfMaxElements++;
            } else {
                break;
            }
        }
        num = numOfMinElements * numOfMaxElements;
    } else {
        num = (a * (a - 1)) / 2;
    }
    dif = arr[a - 1] - arr[0];
    cout << dif << " " << num;
}