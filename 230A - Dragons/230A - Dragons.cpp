#include <iostream>
#include <algorithm>
using namespace std;
int s, n, a, b;
vector <pair <int, int >> v;
int main() {
    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if(s <= v[i].first){
            cout << "NO";
            return 0;
        } else {
            s += v[i].second;
        }
    }
    cout << "YES";
}