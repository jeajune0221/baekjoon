#include <stdio.h>
int main(void)
{
    int n, k;
    int cont = 0, result = 0;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cont++;
        if (cont == k)
        {
            result = i;
            break;
        }
    }
    printf("%d", result);

    return 0;
}