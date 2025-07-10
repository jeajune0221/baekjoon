#include <iostream>
using namespace std;
void qu(int *arr, int start, int end)
{
    if (start - end >= 0)
        return;

    int pivot = *(arr + end);
    int i = start;
    for (int j = start; j < end; j++)
    {
        if (*(arr + j) >= pivot)
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;
            i++;
        }
    }
    int temp = *(arr + i);
    *(arr + i) = pivot;
    *(arr + end) = temp;
    qu(arr, i + 1, end);
    qu(arr, start, i - 1);
}
int main(void)
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    qu(arr, 0, n - 1);
    long long l = 1;
    long long h = arr[0];
    long long mid = 0;
    long long result = 0;
    long long count = 0;
    while (l - h <= 0)
    {
        mid = (l + h) / 2;
        count = 0;
        for (int i = 0; i < n; i++)

            count += arr[i] / mid;

        if (count < k)

            h = mid - 1;
        else
        {
            result = mid;
            l = mid + 1;
        }
    }
    cout << result;
    return 0;
}