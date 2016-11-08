#include <iostream>
using namespace std;
string a;
int main() {
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == 'A' || a[i] == 'O' || a[i] == 'Y' || a[i] == 'E' || a[i] == 'U' || a[i] == 'I' || a[i] == 'a' || a[i] == 'o' || a[i] == 'y' || a[i] == 'e' || a[i] == 'u' || a[i] == 'i') {
            cout << "";
        } else if (a[i] == 'B' || a[i] == 'C' || a[i] == 'D' || a[i] == 'F' || a[i] == 'G' || a[i] == 'H' || a[i] == 'J' || a[i] == 'K' || a[i] == 'L' || a[i] == 'M' || a[i] == 'N' || a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S' || a[i] == 'T' || a[i] == 'W' || a[i] == 'V' || a[i] == 'X' || a[i] == 'Z') {
            a[i] = (char)tolower(a[i]);

        } else if (a[i] == 'b' || a[i] == 'c' || a[i] == 'd' || a[i] == 'f' || a[i] == 'g' || a[i] == 'h' || a[i] == 'j' || a[i] == 'k' || a[i] == 'l' || a[i] == 'm' || a[i] == 'n' || a[i] == 'p' || a[i] == 'q' || a[i] == 'r' || a[i] == 's' || a[i] == 't' || a[i] == 'w' || a[i] == 'v' || a[i] == 'x' || a[i] == 'z') {
            cout << "." << a[i];
        }
    }
}