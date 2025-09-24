#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int check = 0;
    long long first = 1, end = 1;
    while (first <= 100000)
    {
        long long temp = (first + end) * (first - end);
        if (temp == n)
        {
            check = 1;
            printf("%lld\n", first);
            first++;
        }
        else if (temp > n)
        {
            end++;
        }
        else
        {
            first++;
        }
    }
    if (!check)
    {
        printf("-1");
    }
}