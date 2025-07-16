#include <stdio.h>
int main(void)
{
    int n, max, min = 0;
    int arr[110];
    scanf("%d %d", &n, &max);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if (min < sum && sum <= max)
                {
                    min = sum;
                }
            }
        }
    }
    printf("%d", min);
}