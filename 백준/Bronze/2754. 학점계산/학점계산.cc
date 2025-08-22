#include <stdio.h>
int main(void)
{
    char str[5];
    scanf("%s", str);
    if (str[0] == 'A')
    {
        float num = 4.0;
        if (str[1] == '+')
        {
            printf("%.1f", num + 0.3);
        }
        else if (str[1] == '0')
        {
            printf("%.1f", num);
        }
        else
        {
            printf("%.1f", num - 0.3);
        }
    }
    else if (str[0] == 'B')
    {
        float num = 3.0;
        if (str[1] == '+')
        {
            printf("%.1f", num + 0.3);
        }
        else if (str[1] == '0')
        {
            printf("%.1f", num);
        }
        else
        {
            printf("%.1f", num - 0.3);
        }
    }
    else if (str[0] == 'C')
    {
        float num = 2.0;
        if (str[1] == '+')
        {
            printf("%.1f", num + 0.3);
        }
        else if (str[1] == '0')
        {
            printf("%.1f", num);
        }
        else
        {
            printf("%.1f", num - 0.3);
        }
    }
    else if (str[0] == 'D')
    {
        float num = 1.0;
        if (str[1] == '+')
        {
            printf("%.1f", num + 0.3);
        }
        else if (str[1] == '0')
        {
            printf("%.1f", num);
        }
        else
        {
            printf("%.1f", num - 0.3);
        }
    }
    else
    {
        printf("0.0");
    }
}