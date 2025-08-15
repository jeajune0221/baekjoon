#include <stdio.h>
int main(void)
{
    int t;
    int arr[7];
    scanf("%d", &t);
    for (int l = 0; l < t; l++)
    {
        int min = 0, sum = 0;

        for (int i = 0; i < 7; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] % 2 == 0)
            {
                sum += arr[i];
                if (min > arr[i] || min == 0)
                {
                    min = arr[i];
                }
            }
        }
        printf("%d %d\n", sum, min);
    }
    return 0;
}