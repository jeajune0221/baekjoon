#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main(void)
{
    int t;
    scanf("%d", &t);

    for (int z = 0; z < t; z++)
    {
        int arr[110];
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        unsigned long long sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                sum += gcd(arr[i], arr[j]);
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}