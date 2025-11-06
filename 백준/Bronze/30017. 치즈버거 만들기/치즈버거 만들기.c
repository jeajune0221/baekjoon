#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int len = 0;
    while (a >= 2 && b >= 1) {
        a--; 
        len++;
        b--; 
        len++;
    }

    if (a >= 1) {
        a--;
        len++;
    }
    printf("%d\n", len);
    return 0;
}
