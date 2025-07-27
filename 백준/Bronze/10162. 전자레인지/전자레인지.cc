#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int a = 0, b = 0, c = 0;
    if (n >= 300)
    {
        a = n / 300;
        n %= 300;
    }
    if (n >= 60)
    {
        b = n / 60;
        n %= 60;
    }
    if (n >= 10)
    {
        c = n / 10;
        n %= 10;
    }
    if (n != 0)
    {
        printf("-1");
    }
    else
        printf("%d %d %d", a, b, c);
    return 0;
}