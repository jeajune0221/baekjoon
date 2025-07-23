#include <stdio.h>
char str[100];
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int po = 0;
        int arr[100];
        scanf("%s", str);
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (po < 0)
            {
                break;
            }
            if (str[j] == '(')
            {
                po++;
            }
            else
            {
                po--;
            }
        }
        if (po == 0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}