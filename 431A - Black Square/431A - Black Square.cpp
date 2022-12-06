#include <iostream>
using namespace std;
int arr[4], sum;
string s;
int main() {
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> s;
    for (int i = 0; i < s.size(); i++) {
        sum += arr[s[i] - 49];
    }
    cout << sum;
}