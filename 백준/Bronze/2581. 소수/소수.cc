#include <stdio.h>
int isprime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (!(n % i))
            return 0;
    }
    return 1;
}
int main(void)
{
    int n, m;

    int sum = 0;
    scanf("%d %d", &n, &m);
    int min = -1;
    for (int i = n; i <= m; i++)
    {
        if (isprime(i))
        {
            sum += i;
            if (min == -1 || i < min)
                min = i;
        }
    }
    if (min == -1)
        printf("%d", min);
    else
        printf("%d\n%d", sum, min);
}