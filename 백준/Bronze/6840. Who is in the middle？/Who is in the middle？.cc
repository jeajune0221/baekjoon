#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int max, min = 0;
    max = a > (b > c ? b : c) ? a : (b > c ? b : c);
    min = a < (b < c ? b : c) ? a : (b < c ? b : c);
    printf("%d", a + b + c - max - min);
    return 0;
}