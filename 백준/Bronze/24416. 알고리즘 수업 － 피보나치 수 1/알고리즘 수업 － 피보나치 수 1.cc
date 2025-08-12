#include <stdio.h>
int fibo(int n)
{
    static long long arr[41] = {0, 1};
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
    printf("%d %d", fibo(n), n - 2);
    return 0;
}