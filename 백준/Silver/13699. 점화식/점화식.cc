#include <stdio.h>
long long arr[100] = {1};
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            arr[i] += arr[j] * arr[i - j - 1];
        }
    }
    printf("%lld", arr[n]);
    return 0;
}
