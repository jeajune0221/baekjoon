#include <stdio.h>
int main(void)
{
    char str[1000];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if ('a' <= str[i] && str[i] <= 'z')
            str[i] -= 32;
    }
    printf("%s", str);
    return 0;
}