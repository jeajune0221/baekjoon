#include <stdio.h>
int dp(int n)
{
    static long long arr[15] = {0, 1, 2, 4};
    if (arr[n])
        return arr[n];
    arr[n] = dp(n - 1) + dp(n - 2) + dp(n - 3);
    return arr[n];
}
int main(void)
{
    int t;
    int n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%d\n", dp(n));
    }
    return 0;
}