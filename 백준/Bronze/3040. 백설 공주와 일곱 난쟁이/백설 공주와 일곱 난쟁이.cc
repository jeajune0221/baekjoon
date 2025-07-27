#include <stdio.h>
int main(void)
{
    int arr[10];
    int sum = 0;
    int check = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for (int i = 0; i < 9; i++)
    {

        for (int j = i + 1; j < 9; j++)
        {
            if (sum - arr[i] - arr[j] == 100)
            {
                arr[i] = 0;
                arr[j] = 0;
                check = 1;
                break;
            }
            if (check == 1)
                break;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (arr[i])
            printf("%d\n", arr[i]);
    }
}