#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, k, sum, num, b, c[101];
vector < pair<int, int>> a;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        a.push_back( make_pair(b, i));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        sum += a[i].first;
        if (sum <= k) {
            num++;
            c[i] = a[i].second;
        } else {
            break;
        }
    }
    cout << num << endl;
    for (int i = 0; i < num; i++) {
        cout << c[i] << " ";
    }
}