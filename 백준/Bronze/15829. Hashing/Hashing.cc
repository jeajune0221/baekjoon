#include <stdio.h>
int main(void)
{
    char str[51];
    int n;
    scanf("%d", &n);
    scanf("%s", str);
    n = 1;
    int m = 1234567891;
    unsigned long long sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        sum += (str[i] - 'a' + 1) * n;
        n = (n * 31) % m;
        sum %= m;
    }
    printf("%lld", sum);
    return 0;
}