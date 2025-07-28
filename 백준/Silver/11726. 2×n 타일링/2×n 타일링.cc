#include <stdio.h>
long long fibo(int n)
{
    static long long arr[1010] = {1, 1};
    if (arr[n])
        return arr[n];
    arr[n] = (fibo(n - 1) + fibo(n - 2)) % 10007;
    return arr[n] % 10007;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));
    return 0;
}