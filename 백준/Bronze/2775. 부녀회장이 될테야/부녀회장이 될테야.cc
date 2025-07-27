#include <stdio.h>
int main(void)
{

    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int k, n;
        scanf("%d", &k);
        scanf("%d", &n);
        long long arr[15][15] = {0};
        for (int j = 0; j < 15; j++)
        {
            arr[0][j] = j;
        }
        for (int j = 1; j <= k; j++)
        {
            for (int l = 1; l <= n; l++)
            {
                arr[j][l] = arr[j][l - 1] + arr[j - 1][l];
            }
        }
        printf("%lld\n", arr[k][n]);
    }
}