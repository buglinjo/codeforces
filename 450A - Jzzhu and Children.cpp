#include <iostream>
#include <vector>
using namespace std;
vector <pair<int, int>> v;
int n, m, j = 0, k = 0, a, l;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(make_pair(a, i));
    }
    while (n + j > k) {
        if (v[k].first > m) {
            v.push_back(make_pair(v[k].first - m, v[k].second));
            j++;
        } else {
            l = v[k].second + 1;
        }
        k++;
    }
    cout << l;
}