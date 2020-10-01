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
        bool curr = true;
        int count = 0;
        while (n > 1) {
            if (n % 6 == 0) {
                n = n / 6;
                count++;
            }
            else {
                if (n % 3 == 0) {
                    n = n * 2;
                    count++;
                }
                else {
                    curr = false;
                    break;
                }
            }
        }
        if (curr) {
            cout << count << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
