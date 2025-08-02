#include <stdio.h>
long long fibo(int n)
{
    static long long arr[1000100] = {0, 1, 2};
    if (n <= 1)
        return arr[n];
    if (arr[n])
        return arr[n];
    arr[n] = (fibo(n - 1) + fibo(n - 2)) % 15746;
    return arr[n] % 15746;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));
    return 0;
}