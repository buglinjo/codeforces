#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

string getY(int y) {
    string str;
    int num = y / 26;
    int nash = y % 26;
    if (nash == 0) {
        str = (char)(nash + 26 + 64);
        num--;
    } else {
        str = (char)(nash + 64);
    }
    if (num == 0) {
        return str;
    } else {
        return getY(num) + str;
    }
}

string intToStr(string x, int y) {
    return getY(y) + x;
}

string getX(string x) {
    int ans = 0, num;
    for (int i = 0, j = x.size() - 1; i < x.size(), j >= 0; i++, j--) {
        num = x[j] - 64;
        num = num * round(pow(26, i));
        ans += num;
    }
    return to_string(ans);
}

string strToInt(string x, string y) {
    return 'R' + y + 'C' + getX(x);
}

int n, c, xi, yi;
string a, x, y;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        x = "";
        y = "";
        cin >> a;
        c = 0;
        if (a[0] == 'R') {
            for (int j = 1; j < a.size(); j++) {
                if (a[j] == 'C') {
                    c = 1;
                } else {
                    if (c == 0) {
                        x += a[j];
                    } else {
                        y += a[j];
                    }
                }
            }
            yi = stoi(y);
            cout << intToStr(x, yi) << endl;
        } else {
            for (int j = 0; j < a.size(); j++) {
                if (a[j] < 65) {
                    y += a[j];
                } else {
                    x += a[j];
                }
            }
            cout << strToInt(x, y) << endl;
        }
    }
}