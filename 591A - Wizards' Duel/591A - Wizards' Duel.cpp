#include <iostream>
#include <cstdio>
using namespace std;
double a, b, c;
int main() {
    cin >> a >> b >> c;
    printf("%.4f", (100 * b) / (b + c) * a / 100);
}