#include <iostream>
#include <algorithm>
using namespace std;
string a;
int whi, blk;
int main() {
    for (int i = 0; i < 8; i++) {
        cin >> a;
        for (int j = 0; j < 8; j++) {
            if (a[j] == 'Q') {
                whi += 9;
            } else if (a[j] == 'R') {
                whi += 5;
            } else if (a[j] == 'B') {
                whi += 3;
            } else if (a[j] == 'N') {
                whi += 3;
            } else if (a[j] == 'P') {
                whi += 1;
            } else if (a[j] == 'q') {
                blk += 9;
            } else if (a[j] == 'r') {
                blk += 5;
            } else if (a[j] == 'b') {
                blk += 3;
            } else if (a[j] == 'n') {
                blk += 3;
            } else if (a[j] == 'p') {
                blk += 1;
            }
        }
    }
    if (whi > blk) {
        cout << "White";
    } else if (blk > whi) {
        cout << "Black";
    } else {
        cout << "Draw";
    }
}
