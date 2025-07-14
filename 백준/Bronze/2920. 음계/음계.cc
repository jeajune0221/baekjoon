#include <stdio.h>
int main()
{
    int cont = 1;
    int re_cont = 8;
    int arr[10];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == cont)
            cont++;
        else if (arr[i] == re_cont)
            re_cont--;
    }
    if (cont == 9)
        printf("ascending");
    else if (re_cont == 1)
        printf("descending");
    else
        printf("mixed");
}