#include <stdio.h>
int main(void)
{
    char str[501];
    scanf("%s", str);
    int cont0 = 0, cont1 = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '0')
        {
            cont0++;
        }
        else
        {
            cont1++;
        }
    }
    for (int i = 0; i < cont0 / 2; i++)
    {
        printf("0");
    }
    for (int i = 0; i < cont1 / 2; i++)
    {
        printf("1");
    }
    return 0;
}