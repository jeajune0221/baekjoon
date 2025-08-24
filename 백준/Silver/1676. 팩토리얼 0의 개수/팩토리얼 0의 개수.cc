#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", n / 125 + n / 25 + n / 5);
    return 0;
}