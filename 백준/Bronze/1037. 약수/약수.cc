#include <stdio.h>
int main(void)
{
    int n;
    int arr[51];
    scanf("%d", &n);
    int min = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d", max * min);
    return 0;
}