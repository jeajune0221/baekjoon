#include <stdio.h>
long long arr[1000100];
int min(int a, int b)
{
    return a < b ? a : b;
}
long long fibo(int n)
{
    if (n == 1)
        return 0;
    if (arr[n])
        return arr[n];
    arr[n] = fibo(n - 1) + 1;
    if (n % 3 == 0)
    {
        arr[n] = min(arr[n], fibo(n / 3) + 1);
    }
    if (n % 2 == 0)
    {

        arr[n] = min(arr[n], fibo(n / 2) + 1);
    }

    return arr[n];
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));
    return 0;
}