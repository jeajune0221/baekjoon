#include <stdio.h>
int fibo(int n)
{
    static long long arr[1000001] = {0, 1};
    if (arr[n])
        return arr[n];
    if (n <= 1)
        return arr[n];
    arr[n] = (fibo(n - 1) + fibo(n - 2)) % 1000000007;
    return arr[n] % 1000000007;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}
