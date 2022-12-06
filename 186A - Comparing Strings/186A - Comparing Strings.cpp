#include <stdio.h>
#include <string.h>
int main() {
    char a[100100], b[100100];
    int la, lb, k = 0, p[9];
    scanf("%s\n%s", &a, &b);
    la = strlen(a);
    lb = strlen(b);
    for (int i = 0; i < la && k < 5; i++){
        if (a[i] != b[i]){
            p[k] = i;
            k++;
        }
    }
    if (la == lb && k == 2 && a[p[0]] == b[p[1]] && a[p[1]] == b[p[0]]){
        printf("YES");
    } else {
        printf("NO");
    }
}