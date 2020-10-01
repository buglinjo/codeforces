#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl '\n'
#define mod 1000000007
int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}
bool compare(int a, int b) {
    return a > b;
}
int32_t main() {
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int open = 0, count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == ')') {
                open--;
            }
            else {
                if (open < 0)
                    count = max(count, abs(open));
                open++;
                //break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
