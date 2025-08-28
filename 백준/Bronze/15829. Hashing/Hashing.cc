#include <stdio.h>
int main(void)
{
    char str[55];
    int t;
    scanf("%d", &t);
    scanf("%s", str);
    unsigned long long n = 1;
    int m = 1234567891;
    unsigned long long sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        sum += ((str[i] - 'a' + 1) * n) % m;
        n = (n * 31) % m;
        sum %= m;
    }
    printf("%llu", sum);
    return 0;
}