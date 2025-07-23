#include <stdio.h>
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fact(n - 1) * n;
}
int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", fact(n) / (fact(k) * fact(n - k)));
    return 0;
}