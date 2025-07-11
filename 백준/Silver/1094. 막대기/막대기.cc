#include <stdio.h>
int main()
{
    int x;
    int cont = 0;
    scanf("%d", &x);
    while (x > 0)
    {
        if (x & 1)
        {
            cont++;
        }
        x >>= 1;
    }
    printf("%d", cont);
    return 0;
}