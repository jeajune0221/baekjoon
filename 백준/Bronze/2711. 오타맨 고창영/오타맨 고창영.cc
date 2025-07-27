#include <stdio.h>
int main(void)
{
    char str[1010];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d %s", &a, str);
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (j == a - 1)
                continue;
            else
                printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}