#include <stdio.h>
#include <string.h>

char str[51][51];
char check[51];

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    strcpy(check, str[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; str[1][j] != '\0'; j++)
        {
            if (check[j] == str[i][j])
                continue;
            else
                check[j] = '?';
        }
    }
    printf("%s", check);
    return 0;
}