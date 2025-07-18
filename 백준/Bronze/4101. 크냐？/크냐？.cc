#include <stdio.h>
int main(void)
{
    while (1)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        if (a == 0 && b == 0)
            break;
        if (a > b)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}