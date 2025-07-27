#include <stdio.h>

int main(void)
{
    int arr[1010];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int sum = 0;
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
                sum += arr[j + 1] - arr[j];
            else
                break;
        }
        if (sum > max)
            max = sum;
    }

    printf("%d", max);
}
