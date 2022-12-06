#include <iostream>
#include <algorithm>
using namespace std;
int a, numb, numc, pas = 0;
string b, c;
int main() {
    cin >> a >> b >> c;
    for (int i = 0; i < a; i++) {
        numb = (int) b[i] - 48;
        numc = (int) c[i] - 48;
        if (numb > numc) {
            numb = numc + numb;
            numc = numb - numc;
            numb -= numc;
        }
        if (abs(numb - numc) < (numb + (9 - numc) + 1)) {
            pas += abs(numb - numc);
        } else {
            pas += numb + (9 - numc) + 1;
        }
    }
    cout << pas;
}