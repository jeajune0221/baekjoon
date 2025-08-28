#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[14];
    scanf("%s", str);
    int search = 0, search1;
    unsigned long long sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (i % 2 == 0)
            if (str[i] == '*')
            {
                search1 = 1;
            }
            else
                sum += (str[i] - '0');

        else if (str[i] == '*')
        {
            search1 = 3;
        }
        else
            sum += ((str[i] - '0') * 3);
    }
    while ((sum + search * search1) % 10)
    {
        search++;
    }

    printf("%d", search);
    return 0;
}