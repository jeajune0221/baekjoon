#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int t, a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        t = a;
        a = b;
        b += t;
        b %= 1000000007;
    }

    printf("%d %d", a, n - 2);
    return 0;
}