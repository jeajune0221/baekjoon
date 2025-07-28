#include <stdio.h>
long long fact(int a, int b)
{
    long long result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= (b - i + 1);
        result /= i;
    }
    return result;
}
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%lld\n", fact(a, b));
    }
    return 0;
}