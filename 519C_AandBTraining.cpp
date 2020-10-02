#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
vector<ll> v;

int main() {
	int ans = 0;
	int n, m;
	cin >> n >> m;
	while (n && m) {
		if (n > m) {
			if (n >= 2) {
				n -= 2;
				--m;
				++ans;
			} else {
				break;
			}
		} else {
			if (m >= 2) {
				m -= 2;
				--n;
				++ans;
			} else {
				break;
			}
		}
	}
	cout << ans;
	return 0;
}