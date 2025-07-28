#include <stdio.h>
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[1000100] = {0};
    for (int i = 2; i <= m; i++)
    {
        arr[i] = 1;
    }
    for (int i = 2; i <= m; i++)
    {
        for (int j = i; j <= m; j += i)
        {
            if (i == j)
                continue;
            arr[j] = 0;
        }
    }
    for (int i = n; i <= m; i++)
    {
        if (arr[i])
            printf("%d\n", i);
        else
            continue;
    }
    return 0;
}