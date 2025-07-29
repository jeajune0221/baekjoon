#include <stdio.h>
int main(void)
{
    int t;
    int n;
    scanf("%d", &t);

    for (int k = 0; k < t; k++)
    {
        int arr[110] = {0};
        int max = 0;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] - arr[i + 1] > max)
            {
                max = arr[i] - arr[i + 1];
            }
        }
        printf("Class %d\n", k + 1);
        printf("Max %d, Min %d, Largest gap %d\n", arr[0], arr[n - 1], max);
    }
    return 0;
}