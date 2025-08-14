#include <stdio.h>
long long arr[10000000] = {5};
int main(void)
{
    int n;
    scanf("%d", &n);
    int n1 = 7;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + n1) % 45678;
        n1 += 3;
    }
    printf("%lld", arr[n - 1]);
    return 0;
}