#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[6];
    scanf("%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
    int t, p;
    scanf("%d %d", &t, &p);
    int result = 0;
    for (int i = 0; i < 6; i++)
    {
        result += (arr[i] + t - 1) / t;
    }
    printf("%d\n", result);
    printf("%d %d", n / p, n % p);
}