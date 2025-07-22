#include <stdio.h>
int main(void)
{
    long long arr[100] = {0, 1};
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("%lld", arr[n]);
}