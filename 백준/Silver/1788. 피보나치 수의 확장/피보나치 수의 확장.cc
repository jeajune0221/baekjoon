#include <stdio.h>
int fibo(int n)
{
    static long long arr[1000100] = {0, 1, 1};
    if (n <= 1)
        return arr[n];
    if (arr[n])
        return arr[n];
    arr[n] = (fibo(n - 1) + fibo(n - 2)) % 1000000000;
    return arr[n] % 1000000000;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        if (n % 2)
            printf("%d\n", 1);
        else
            printf("%d\n", -1);
        printf("%d\n", fibo(-n));
    }
    else if (n == 0)
    {
        printf("%d\n", 0);
        printf("%d\n", 0);
    }
    else
    {
        printf("1\n");
        printf("%d\n", fibo(n));
    }
    return 0;
}