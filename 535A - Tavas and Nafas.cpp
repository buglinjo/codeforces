#include <iostream>
using namespace std;
int a, b, c;
string arr[28] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "thirty",
        "forty",
        "fifty",
        "sixty",
        "seventy",
        "eighty",
        "ninety"
};
int main() {
    cin >> a;
    if (a < 21) {
        cout << arr[a];
    } else {
        if (a % 10 == 0) {
            b = a / 10;
            cout << arr[18 + b];
        } else {
            b = a / 10;
            c = a % 10;
            cout << arr[18 + b] << "-" << arr[c];
        }
    }
}