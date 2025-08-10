#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int bird = n, cont = 0, op = 1;
    while (bird > 0)
    {
        bird -= op;
        op++;
        cont++;
        if (op > bird)
        {
            op = 1;
        }
    }
    printf("%d", cont);
    return 0;
}