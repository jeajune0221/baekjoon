#include <stdio.h>
long long fibo(int n)
{
    static long long arr[120] = {0, 1, 1};
    if (arr[n])
        return arr[n];
    if (n <= 1)
        return arr[n];
    arr[n] = fibo(n - 1) + fibo(n - 3);
    return arr[n];
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));
    return 0;
}
