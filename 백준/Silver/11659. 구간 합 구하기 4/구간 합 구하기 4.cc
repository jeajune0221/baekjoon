#include <stdio.h>
int main(void)
{
    int arr[100100];
    int check[100100];
    int sum = 0;
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        check[i] = sum;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        int c = 0;
        scanf("%d %d", &a, &b);

        printf("%d\n", check[b] - check[a-1]);
    }
    return 0;
}