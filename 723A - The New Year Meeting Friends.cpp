#include <iostream>
#include <algorithm>
using namespace std;
int mas[3];
int main() {
    cin >> mas[0] >> mas[1] >> mas[2];
    sort(mas, mas + 3);
    cout << mas[2] - mas[0];
}
