#include <stdio.h>
long long fibo(int n)
{
    static long long arr[51] = {0, 1, 1};
    if (n <= 1)
        return arr[n];
    if (arr[n])
        return arr[n];
    arr[n] = fibo(n - 1) + fibo(n - 2);
    return arr[n];
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%lld", 4 * fibo(n) + 2 * fibo(n - 1));
    return 0;
}