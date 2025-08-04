#include <stdio.h>
#include <stdlib.h>
void marge(int *arr, int n)
{
    int mid = n / 2;
    int i1 = 0;
    int i2 = 0;
    int ia = 0;
    int *g1 = (int *)malloc(sizeof(int) * mid);
    int *g2 = (int *)malloc(sizeof(int) * (n - mid));
    for (int i = 0; i < mid; i++)
        g1[i] = arr[i];
    for (int i = mid; i < n; i++)
        g2[i - mid] = arr[i];
    int len1 = mid;
    int len2 = n - mid;
    if (len1 > 1)
        marge(g1, len1);
    if (len2 > 1)
        marge(g2, len2);
    while (i1 < len1 && i2 < len2)
    {
        if (g1[i1] > g2[i2])
        {
            arr[ia++] = g1[i1++];
        }
        else
        {
            arr[ia++] = g2[i2++];
        }
    }
    while (i1 < len1)
        arr[ia++] = g1[i1++];
    while (i2 < len2)
        arr[ia++] = g2[i2++];

    free(g1);
    free(g2);
}
int main(void)
{
    int n;
    int arr[1000100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    marge(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}