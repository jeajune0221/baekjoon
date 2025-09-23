#include <stdio.h>
#include <stdlib.h>
void merge(int *arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int *L = (int *)malloc(sizeof(int) * n1);
    int *R = (int *)malloc(sizeof(int) * n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i] ;
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
long long aabs(long long n)
{
    if (n < 0)
    {
        return -n;
    }
    return n;
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
    scanf("%d", &n);
    int first = 0, end = n - 1;
    int arr[500010];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, n - 1);
    int f = 0, e = n - 1;
    long long max = 2000000000LL;

    while (first < end)
    {
        long long sum = (long long)arr[first] + (long long)arr[end];
        if (aabs(sum) < aabs(max))
        {
            max = sum;
            f = first;
            e = end;
        }
        if (sum == 0)
        {
            printf("%d %d", arr[first], arr[end]);
            return 0;
        }
        else if (sum > 0)
        {
            end--;
        }
        else
        {
            first++;
        }
    }
    printf("%d %d", arr[f], arr[e]);

    return 0;
}