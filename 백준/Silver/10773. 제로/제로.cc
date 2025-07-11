#include <stdio.h>
int main()
{
    int n;
    int cont = 0;
    int sum = 0;
    int arr[100100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int mp;
        scanf("%d", &mp);
        if (mp != 0)
        {

            arr[cont] = mp;
            cont++;
        }
        else

            arr[--cont] = 0;
    }
    for (int i = 0; i < cont; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
}