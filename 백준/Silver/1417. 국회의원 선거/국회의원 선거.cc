#include <stdio.h>
int arr[55];
int max(int n)
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[m] <= arr[i])
        {
            m = i;
        }
    }
    arr[m]--;
    arr[0]++;
    return m;
}
int main(void)
{
    int n;
    int cont = 0;
    scanf("%d", &n);
    int max1 = -1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        max1 = max(n);
        if (max1 == 0)
        {
            printf("%d", cont);
            break;
        }
        cont++;
    }
    return 0;
}