#include <stdio.h>
#include <stdlib.h>
void merge(int *arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int *L = (int *)malloc(sizeof(int) * n1);
    int *R = (int *)malloc(sizeof(int) * n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + i + 1];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];

    free(L);
    free(R);
}
void merge_sort(int *arr, int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
int main(void)
{
    int n;
    int check[1000000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &check[i]);
    }
    merge_sort(check, 0, n - 1);
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int temp = 0;
        int s = 0;
        scanf("%d", &temp);
        int first = 0, end = n - 1;
        while (first <= end)
        {
            int mid = (first + end) / 2;
            if (temp == check[mid])
            {
                s = 1;
                printf("1\n");
                break;
            }
            else if (check[mid] > temp)
            {
                end = mid - 1;
            }
            else
            {
                first = mid + 1;
            }
        }
        if (!s)
        {
            printf("%d\n", 0);
        }
    }

    return 0;
}