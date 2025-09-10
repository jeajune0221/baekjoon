#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[501];
    scanf("%s", str);
    int len = 0;
    int cont0 = 0, cont1 = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '0')
            cont0++;
        else
            cont1++;
        len++;
    }
    int k = 0;
    int half0 = cont0 / 2;
    int half1 = cont1 / 2;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] != '0')
        {
            str[i] = -1;
            k++;
        }
        if (k == half1)
        {
            break;
        }
    }
    k = 0;
    for (int i = len - 1; i >= 0; i--)
    {

        if (str[i] == '0')
        {
            str[i] = -1;
            k++;
        }
        if (k == half0)
        {
            break;
        }
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == -1)
        {
            continue;
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}