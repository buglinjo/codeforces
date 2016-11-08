#include <iostream>
using namespace std;
int a, b, mas1[100005], mas2[100005], mas3[100005];
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        mas1[i] = b;
    }
    for (int j = 0; j < a; j++) {
        cin >> b;
        mas2[j] = b;
    }
    for (int h = 0; h < a; h++) {
        mas3[mas1[h]] = mas2[h];
    }
    for (int f = 1; f <= a; f++) {
        cout << mas3[f] << " ";
    }
}