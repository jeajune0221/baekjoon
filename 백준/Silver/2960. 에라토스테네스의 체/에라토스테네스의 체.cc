#include <stdio.h>
int main(void)
{
    int n, k, con = 0, se;
    int arr[1010];
    scanf("%d %d", &n, &k);
    for (int i = 2; i <= n; i++)
    {
        arr[i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        if (con == k)
            break;
        for (int j = i; j <= n; j += i)
        {
            if (arr[j] != 0)
            {
                arr[j] = 0;
                con++;
            }
            else
                continue;

            if (con == k)
            {
                se = j;
                break;
            }
        }
    }
    printf("%d", se);
    return 0;
}