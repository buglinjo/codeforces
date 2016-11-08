#include <iostream>
#include <algorithm>
using namespace std;
int len, sum, mas[100005];
int main() {
    cin >> len;
    for (int i = 0; i < len; i++) {
        cin >> mas[i];
        sum += mas[i];
    }
    sort(mas, mas + len);
    reverse(mas, mas + len);
    if (mas[len - 1] != 0) {
        cout << "-1";
    } else if (mas[0] == 0 || sum == 0) {
        cout << "0";
    } else {
        if (sum % 3 == 0) {
            for (int i = 0; i < len; i++) {
                cout << mas[i];
            }
        } else if (sum % 3 == 1) {
            for (int i = len - 1; i >= 0; i--) {
                if (mas[i] != 0 && mas[i] % 3 == 1) {
                    sum -= mas[i];
                    mas[i] = -1;
                    break;
                }
            }
            if (sum % 3 != 0) {
                int test = 0;
                for (int i = len - 1; i >= 0; i--) {
                    if (mas[i] != 0 && mas[i] % 3 == 2) {
                        mas[i] = -1;
                        test++;
                    }
                    if (test == 2) {
                        break;
                    }
                }
            }
            if ((mas[0] == -1 || mas[1] == -1) && mas[2] == 0) {
                cout << 0;
            } else {
                for (int i = 0; i < len; i++) {
                    if (mas[i] != -1) {
                        cout << mas[i];
                    }
                }
            }
        } else if (sum % 3 == 2) {
            for (int i = len - 1; i >= 0; i--) {
                if (mas[i] != 0 && mas[i] % 3 == 2) {
                    sum -= mas[i];
                    mas[i] = -1;
                    break;
                }
            }
            if (sum % 3 != 0) {
                int test = 0;
                for (int i = len - 1; i >= 0; i--) {
                    if (mas[i] != 0 && mas[i] % 3 == 1) {
                        mas[i] = -1;
                        test++;
                    }
                    if (test == 2) {
                        break;
                    }
                }
            }
            if ((mas[0] == -1 || mas[1] == -1) && mas[2] == 0) {
                cout << 0;
            } else {
                for (int i = 0; i < len; i++) {
                    if (mas[i] != -1) {
                        cout << mas[i];
                    }
                }
            }
        }
    }
}