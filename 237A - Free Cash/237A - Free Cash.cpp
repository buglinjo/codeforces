#include <iostream>
#include <algorithm>
using namespace std;
int a, h, m, arr[2460];
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> h >> m;
        arr[(h * 100) + m]++;
    }
    cout << endl << * max_element(arr, arr + 2460);
}