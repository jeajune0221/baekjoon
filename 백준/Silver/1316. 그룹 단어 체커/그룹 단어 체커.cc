#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        char check[27] = {0};
        char str[101];
        int ch = 0;
        scanf("%s", str);
        for (int i = 0; str[i] != '\0'; i++)
        {

            if (check[str[i] - 'a' + 1])
            {
                ch = 1;
                break;
            }
            if (str[i] == str[i + 1])
                continue;
            else
            {
                check[str[i] - 'a' + 1]++;
            }
        }
        if (ch == 0)
            cont++;
    }
    printf("%d", cont);
    return 0;
}