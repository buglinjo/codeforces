#include <iostream>
using namespace std;
int n, m, a, cur = 1;
__int64 pas = 0;
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        if (a >= cur) {
            pas += (a - cur);
        } else {
            pas += n - cur + a;
        }
        cur = a;
    }
    cout << pas;
}