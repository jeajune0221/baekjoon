#include <stdio.h>
int main(void)
{

    long long n = 0;
    scanf("%d", &n);
    long long min = 0;

    for (int i = 1; i < n; i++)
    {
        int cont = i;
        int sum = i;
        while (cont > 0)
        {

            sum += cont % 10;
            cont /= 10;
        }
        if (sum == n)
        {
            min = i;
            break;
        }
    }
    printf("%lld", min);
    return 0;
}