#include <stdio.h>
int main(void)
{
    int n, k;
    while (scanf("%d %d", &n, &k) != EOF)
    {

        int cont = 0;
        int ch = n, st = 0;

        while (ch > 0)
        {
            cont += ch;
            st += ch;
            ch = st / k;
            st = st % k;
        }
        printf("%d\n", cont);
    }
    return 0;
}