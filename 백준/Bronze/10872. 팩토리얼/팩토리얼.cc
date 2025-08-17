#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    unsigned long long sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    printf("%lld", sum);
    return 0;
}