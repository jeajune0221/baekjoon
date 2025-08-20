#include <stdio.h>
int main(void)
{
    char stack[100];
    char str[150];
    while (1)
    {
        int cont = 0;
        int check = 0;
        fgets(str, sizeof(str), stdin);
        if (str[0] == '.')
        {
            return 0;
        }

        for (int i = 0; str[i] != '.'; i++)
        {
            if (str[i] == '(' || str[i] == '[')
            {
                stack[cont++] = str[i];
            }
            else if (str[i] == ')')
            {
                if (cont == 0 || stack[--cont] != '(')
                {
                    printf("no\n");
                    check = 1;
                    break;
                }
            }
            else if (str[i] == ']')
            {
                if (cont == 0 || stack[--cont] != '[')
                {
                    printf("no\n");
                    check = 1;
                    break;
                }
            }
        }
        if (check == 0 && cont == 0)
        {
            printf("yes\n");
        }
        else if (check == 0)
        {
            printf("no\n");
        }
    }

    return 0;
}