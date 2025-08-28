#include <stdio.h>

int min(int a, int b)
{
    return a < b ? a : b;
}
int main(void)
{
    int w, h;
    scanf("%d %d", &h, &w);
    int cont = 0;
    int arr[501];
    int mid = 0;
    for (int i = 0; i < w; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < w - 1; i++)
    {
        int rmax = 0, lmax = 0;
        for (int j = 0; j < i; j++)
        {
            if (lmax < arr[j])
                lmax = arr[j];
        }
        for (int j = w - 1; j > i; j--)
        {
            if (rmax < arr[j])
                rmax = arr[j];
        }
        mid = min(lmax, rmax);
        if (mid - arr[i] < 0)
        {
            continue;
        }
        else
            cont += mid - arr[i];
    }
    printf("%d", cont);
}