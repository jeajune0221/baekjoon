#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str[1001];
        scanf("%s", str);
        if (6 <= strlen(str) && strlen(str) <= 9)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}