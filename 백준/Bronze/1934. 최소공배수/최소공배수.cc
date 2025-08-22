#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        unsigned long long a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", a * b / gcd(a, b));
    }
    return 0;
}