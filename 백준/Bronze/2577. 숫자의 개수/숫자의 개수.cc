#include <stdio.h>
char str[100000000];
int main(void)
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    long long result = a * b * c;
    sprintf(str, "%lld", result);
    for (int j = 0; j < 10; j++)
    {
        int cont = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] - 48 == j)
            {
                cont++;
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}