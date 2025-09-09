#include <stdio.h>
long long fibo(int n)
{
    static long long arr[35] = {0, 0, 3};
    if (n <= 1)
        return 1;
    if (arr[n])
        return arr[n];

    arr[n] = fibo(n - 2) * 4 - (fibo(n - 4) * 1);
    return arr[n];
}
int main(void)
{
    int n;
    scanf("%d", &n);
    if (n % 2)
        printf("0");
    else
    {
        printf("%lld", fibo(n));
    }
    return 0;
}