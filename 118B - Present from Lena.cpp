#include <stdio.h>
int i, j, k, n, m;
int main() {
    while (scanf("%d", & n) + 1) {
        for (i = 0; i < 2 * n + 1; i++) {
            j = i <= n ? i : (2 * n - i);
            for (k = 0; k < n - j; k++) {
                printf("  ");
            }
            for (k = 0; k < 2 * j + 1; k++) {
                m = k <= j ? k : (2 * j - k);
                printf("%d%c", m, k == 2 * j ? '\n' : ' ');
            }
        }
    }
}