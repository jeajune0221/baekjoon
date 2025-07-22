#include <stdio.h>
int Afibo(int n);
int Bfibo(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d %d", Afibo(n), Bfibo(n));
}
int Afibo(int n)
{
    static int arr[50] = {0, 0, 1};
    if (n <= 1)
    {
        return arr[n];
    }
    if (arr[n])
    {
        return arr[n];
    }
    arr[n] = Afibo(n - 1) + Afibo(n - 2);
    return arr[n];
}
int Bfibo(int n)
{
    static int arr[50] = {0, 1, 1};
    if (n <= 1)
    {
        return arr[n];
    }
    if (arr[n])
    {
        return arr[n];
    }
    arr[n] = Bfibo(n - 1) + Bfibo(n - 2);
    return arr[n];
}