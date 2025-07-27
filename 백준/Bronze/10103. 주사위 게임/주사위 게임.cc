#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int c = 100, s = 100;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b)
            continue;
        else if (a > b)
            s -= a;
        else
            c -= b;
    }
    printf("%d\n%d", c, s);
}