#include <stdio.h>

int main(void) {
    char str[1005];
    int cont = 0;
    while (fgets(str, sizeof(str), stdin)) {
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}
