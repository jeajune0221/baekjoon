#include <stdio.h>
int gcd(unsigned long long a, unsigned long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(unsigned long long a, unsigned long long b)
{
    unsigned long long result = a * b;
    return result / gcd(a, b);
}
int main(void)
{
    unsigned long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", lcm(a, b));
}